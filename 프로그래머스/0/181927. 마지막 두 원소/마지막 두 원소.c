#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len) {
    // int 배열이므로 sizeof(int)를 곱해야 함
    int* answer = (int*)malloc((num_list_len + 1) * sizeof(int));
    
    // 기존 배열 복사
    for (int i = 0; i < num_list_len; i++) {
        answer[i] = num_list[i];
    }
    
    // 마지막 원소와 그 전 원소 비교
    int last = num_list[num_list_len - 1];      // 마지막 원소
    int prev = num_list[num_list_len - 2];      // 그 전 원소
    
    if (last > prev) {
        answer[num_list_len] = last - prev;     // 마지막 원소 - 그 전 원소
    } else {
        answer[num_list_len] = last * 2;        // 마지막 원소 * 2
    }
    
    return answer;
}