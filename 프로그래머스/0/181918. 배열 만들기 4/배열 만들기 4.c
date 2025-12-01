#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len) {
    // 최대 크기로 동적 할당 (최악의 경우 모든 원소가 들어갈 수 있음)
    int* stk = (int*)malloc(arr_len * sizeof(int));
    int stk_size = 0;  // stk에 담긴 원소의 개수
    
    int i = 0;
    while (i < arr_len) {
        // 1. stk가 비어있으면
        if (stk_size == 0) {
            stk[stk_size++] = arr[i];
            i++;
        }
        // 2. stk의 마지막 원소가 arr[i]보다 작으면
        else if (stk[stk_size - 1] < arr[i]) {
            stk[stk_size++] = arr[i];
            i++;
        }
        // 3. stk의 마지막 원소가 arr[i]보다 크거나 같으면
        else {
            stk_size--;  // 마지막 원소 제거 (i는 증가하지 않음)
        }
    }
    
    // 실제 사용한 크기로 재할당 (선택사항)
    int* result = (int*)malloc(stk_size * sizeof(int));
    for (int j = 0; j < stk_size; j++) {
        result[j] = stk[j];
    }
    free(stk);
    
    return result;
}