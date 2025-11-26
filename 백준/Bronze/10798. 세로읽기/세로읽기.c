#include <stdio.h>
#include <string.h>

int main() {
    char words[5][16];  // 5줄, 최대 15글자 + null
    int max_len = 0;
    
    // 5줄 입력 받기
    for (int i = 0; i < 5; i++) {
        scanf("%s", words[i]);
        int len = strlen(words[i]);
        if (len > max_len) {
            max_len = len;  // 가장 긴 단어의 길이 저장
        }
    }
    
    // 세로로 읽기 (열 우선 순회)
    for (int col = 0; col < max_len; col++) {
        for (int row = 0; row < 5; row++) {
            // 해당 위치에 글자가 있으면 출력
            if (col < strlen(words[row])) {
                printf("%c", words[row][col]);
            }
        }
    }
    printf("\n");
    
    return 0;
}