#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* number) {
    int answer = 0;
    // number는 문자열로 들어옴
    
    // 모든 문자열을 순회해서 int로 변환 후 더해야 함
    // 문자열의 길이 변수
    int number_len = strlen(number);

    // 48을 빼야 정수로 변환 가능 문자 0의 아스키 값은 48
    for (int i = 0; i < number_len; i++)
    {
        answer += number[i] - 48;
    }
        
    return answer % 9;
}