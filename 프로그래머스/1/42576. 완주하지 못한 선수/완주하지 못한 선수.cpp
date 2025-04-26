#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 참여한 선수 이름 배열 participant 완주한 선수 이름 completion
// answer -> 완주하지 못한 선수 이름
// completion의 길이는 participant의 길이보다 1 작음
string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    
    for (int i = 0; i < completion.size(); i++)
    {
        if (completion[i] != participant[i])
            return (participant[i]);
    }
    return participant.back();
}