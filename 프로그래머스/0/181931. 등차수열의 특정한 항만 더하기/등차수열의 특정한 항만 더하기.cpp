#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    
    if (included[0] == true)
        answer += a;
    for (int i = 1; i < included.size(); i++)
    {
        if (included[i] == true)
            answer += d * i + a;
    }
    return answer;
}