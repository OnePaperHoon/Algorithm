#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* my_string, const char* letter) {
    int i = 0;
    int count = 0;
    
    // letter[0]과 다른 문자의 개수를 세기
    while(my_string[i])
    {
        if (my_string[i] != letter[0])  // letter의 첫 번째 문자와 비교
            count++;
        i++;
    }
    
    char* answer = (char *)malloc(count + 1);  // 한 번만 선언
    
    i = 0;
    int j = 0;
    while (my_string[i])
    {
        if (my_string[i] != letter[0])  // * 제거, letter[0]과 비교
        {
            answer[j] = my_string[i];
            j++;
        }
        i++;
    }
    answer[j] = '\0';  // 올바른 위치에 null terminator
    return answer;
}