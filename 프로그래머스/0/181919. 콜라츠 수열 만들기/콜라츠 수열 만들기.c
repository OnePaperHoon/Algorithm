#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    // 최대 크기를 위한 임시 배열 (최악의 경우를 대비)
    int temp[500];  // 1000 이하에서는 충분한 크기
    int count = 0;
    
    // 콜라츠 수열 생성
    int current = n;
    while (true) {
        temp[count++] = current;
        
        if (current == 1) {
            break;
        }
        
        if (current % 2 == 0) {
            // 짝수: 2로 나누기
            current = current / 2;
        } else {
            // 홀수: 3 * x + 1
            current = 3 * current + 1;
        }
    }
    
    // 실제 크기만큼 동적 할당
    int* answer = (int*)malloc(count * sizeof(int));
    
    // 값 복사
    for (int i = 0; i < count; i++) {
        answer[i] = temp[i];
    }
    
    return answer;
}