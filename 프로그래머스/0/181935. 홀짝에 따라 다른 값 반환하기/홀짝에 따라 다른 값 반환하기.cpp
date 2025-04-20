#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    int flag = n % 2;
    int i = 0;
    answer = flag;
    if (flag != 0)
        i = 1;
    while (i < n)
    {
        if (flag == 0)
        {
            i += 2;
            answer += i * i;
        }
        else if (flag == 1)
        {
            i += 2;
            answer += i;
        }
    }
    return answer;
}