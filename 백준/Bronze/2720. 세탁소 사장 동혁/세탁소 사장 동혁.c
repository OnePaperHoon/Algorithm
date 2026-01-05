#include <stdio.h>


int main(void) {
    int T, C;
    int coins[4] = {25, 10, 5, 1}; // 동전 단위, 쿼터, 다임, 니켈, 페니

    scanf("%d", &T); // 테스트 케이스 개수 입력
    for (int t = 0; t < T; t++) {
        scanf("%d", &C); // 각 테스트 케이스 거스름돈 C 입력
        int count = 0; // 최소 동전 개수 초기화

        for (int i = 0; i < 4; i++) {
            count = C / coins[i]; // 해당 동전 단위로 거슬러 줄 수 있는
            C %= coins[i]; // 남은 거스름돈 계산
            printf("%d ", count);
        }
    }
    return 0;
}