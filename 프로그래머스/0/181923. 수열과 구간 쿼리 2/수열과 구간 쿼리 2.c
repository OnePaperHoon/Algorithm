#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
// queries_rows는 2차원 배열 queries의 행 길이, queries_cols는 2차원 배열 queries의 열 길이입니다.
int* solution(int arr[], size_t arr_len, int** queries, size_t queries_rows, size_t queries_cols) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(queries_rows * sizeof(int));
    
    // 모든 queries에 대해서
    for (size_t i = 0; i < queries_rows; i++)
    {
        // 가장 작은 값 저장용 min
        int min = 1000001;
        // 각 arr에 대해서 완전 탐색을 진행
        for (size_t j = queries[i][0]; j <= queries[i][1]; j++)
        {
            if (queries[i][2] < arr[j] && arr[j] < min)
                min = arr[j];
        }
        if (min == 1000001)
            answer[i] = -1;
        else
            answer[i] = min;
    }
    return answer;
}