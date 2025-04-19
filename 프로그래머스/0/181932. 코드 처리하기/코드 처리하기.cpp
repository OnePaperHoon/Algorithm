#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    
    bool mode = false;
    for (int i = 0; code[i]; i++)
    {
        if (code[i] == '1')
        {
            mode = !mode;
        }
        
        if (code[i] != '1')
        {
            if (mode == false)
            {
                if (i % 2 == 0)
                {
                    answer += code[i];
                }
            }
            if (mode == true)
            {
                if (i % 2 == 1)
                {
                    answer += code[i];
                }
            }
        }
    }
    if (answer.empty())
    {
        return ("EMPTY");
    }
    return answer;
}