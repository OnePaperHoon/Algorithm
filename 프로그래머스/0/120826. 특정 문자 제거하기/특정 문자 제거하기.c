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

/* Best Code
char* solution(const char* my_string, const char* Letter)
{
    // resturn 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(strlen(my_string) + 1); null이 없을수 있으니 + 1
    int w = 0; -> 제거된 문자 수
    for (int i = 0; i < strlen(my_string); i++)
    {
        if (my_string[i] != letter[0])
        {
            answer[i - w] = my_string[i]; --; 제거된 문자 수 만큼 앞으로 당기기
        }
        else
        {
            w++; -> 제거된 문자 수 증가
        }
        answer[strlen(my_string) - w] = '\0'; -> 최종 null 위치
        return answer;
}

*/