#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    unordered_map<string, int> rank;
    
    for (int i = 0; i < players.size(); i++)
    {
        rank[players[i]] = i;
    }

    for (const string& name : callings)
    {
        int curIndex = rank[name];
        int frontIndex = curIndex - 1;

        swap(players[curIndex], players[frontIndex]);

        rank[players[curIndex]] = curIndex;
        rank[players[frontIndex]] = frontIndex;
    }

    return players;
}

