#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    string answer = "";
    
    for (int i = 0; i < new_id.length(); ++i)
    {
        if (isupper(new_id[i]) != 0)
            new_id[i] += 32;
    }
    
    string temp;
    for (int i = 0; i < new_id.length(); ++i)
    {
        if (islower(new_id[i])
        || isdigit(new_id[i])
        || new_id[i] == '-'
        || new_id[i] == '_'
        || new_id[i] == '.')
            temp += new_id[i];
    }
    
    for (int i = 0; i < temp.size(); ++i)
    {
        if (temp[i] == '.' && !answer.empty() && answer.back() == '.')
        {
            continue;
        }
        answer += temp[i];
    }
    
    if (!answer.empty() && answer.front() == '.')
            answer.erase(answer.begin());
    if (!answer.empty() && answer.back() == '.')
            answer.pop_back();
    
    if (answer.empty())
        answer = "a";
    
    if (answer.length() >= 16)
    {
        answer = answer.substr(0, 15);
        if (answer.back() == '.')
            answer.pop_back();
    }
    
    while (answer.length() < 3)
    {
        answer += answer.back();
    }
    return answer;
}