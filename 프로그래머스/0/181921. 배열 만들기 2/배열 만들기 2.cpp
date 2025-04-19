#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    queue<int> q;
    
    q.push(5);
    
    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        
        if (cur > r)
            continue;
        if (cur >= l)
            answer.push_back(cur);
        if (cur * 10 <= r)
        {
            q.push(cur * 10);
            q.push(cur * 10 + 5);
        }
    }
    if (answer.empty())
        answer.push_back(-1);
    return answer;
}