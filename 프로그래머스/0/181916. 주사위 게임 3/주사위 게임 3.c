#include <stdio.h>
#include <stdlib.h>

int solution(int a, int b, int c, int d) {
    // 각 숫자의 개수를 세기 위한 배열 (1~6)
    int count[7] = {0};
    count[a]++;
    count[b]++;
    count[c]++;
    count[d]++;
    
    // 각 개수별로 어떤 숫자들이 있는지 찾기
    int four = -1, three = -1, pairs[2] = {-1, -1}, two = -1;
    int singles[4], single_idx = 0;
    
    for (int i = 1; i <= 6; i++) {
        if (count[i] == 4) {
            four = i;
        } else if (count[i] == 3) {
            three = i;
        } else if (count[i] == 2) {
            if (pairs[0] == -1) pairs[0] = i;
            else pairs[1] = i;
            two = i;
        } else if (count[i] == 1) {
            singles[single_idx++] = i;
        }
    }
    
    // 경우 1: 4개 모두 같음
    if (four != -1) {
        return 1111 * four;
    }
    
    // 경우 2: 3개 같음
    if (three != -1) {
        int q = singles[0];
        return (10 * three + q) * (10 * three + q);
    }
    
    // 경우 3: 2개씩 같음
    if (pairs[0] != -1 && pairs[1] != -1) {
        int p = pairs[0];
        int q = pairs[1];
        return (p + q) * abs(p - q);
    }
    
    // 경우 4: 2개만 같음
    if (two != -1) {
        int q = singles[0];
        int r = singles[1];
        return q * r;
    }
    
    // 경우 5: 모두 다름
    int min = singles[0];
    for (int i = 1; i < 4; i++) {
        if (singles[i] < min) min = singles[i];
    }
    return min;
}

int main() {
    printf("%d\n", solution(2, 2, 2, 2));  // 2222
    printf("%d\n", solution(4, 1, 4, 4));  // 1681
    printf("%d\n", solution(6, 3, 3, 6));  // 27
    printf("%d\n", solution(2, 5, 2, 6));  // 30
    printf("%d\n", solution(6, 4, 2, 5));  // 2
    
    return 0;
}