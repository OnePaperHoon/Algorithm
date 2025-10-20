#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>  // strlen을 위해 추가

char* solution(const char* my_string, int n) {
    char* answer = (char*)malloc(strlen(my_string) * n + 1);  // +1 for null terminator
    int i = 0;
    int j;
    int k = 0;
    while (my_string[i])
    {
        j = 0;
        while (j < n)
        {
            answer[k] = my_string[i];
            j++;
            k++;
        }
        i++;
    }
    answer[k] = '\0';  // null terminator 추가
    return answer;
}