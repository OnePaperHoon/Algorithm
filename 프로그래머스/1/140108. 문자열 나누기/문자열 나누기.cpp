#include <string>

using namespace std;

int solution(string s) {
    int answer = 0;
    int same = 0, diff = 0;
    char current = s[0];

    for (int i = 0; i < s.length(); ++i)
    {
        if (same == 0 && diff == 0) {
            current = s[i];
        }
        if (s[i] == current)
            same++;
        else
            diff++;
        if (same == diff) {
            answer++;
            same = 0;
            diff = 0;
        }
    }
    if (same != 0 || diff != 0)
        answer++;
    return answer;
}
