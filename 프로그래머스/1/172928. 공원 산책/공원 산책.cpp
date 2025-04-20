#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    int h = park.size();
    int w = park[0].size();
    int x = 0, y = 0;
    
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (park[i][j] == 'S')
            {
                x = j;
                y = i;
                break;
            }
        }
    }
    
    const int dy[4] = {-1, 1, 0, 0};
    const int dx[4] = {0, 0, -1, 1};
    const string dir = "NSWE";
    
    for (const string& route : routes)
    {
        stringstream ss(route);
        char d;
        int dist;
        
        ss >> d >> dist;
        
        int dir_idx = dir.find(d);
        bool blocked = false;
        
        for (int i = 0; i <= dist; ++i)
        {
            int tx = x + dx[dir_idx] * i;
            int ty = y + dy[dir_idx] * i;
            if (tx < 0 || ty < 0 || tx >= w || ty >= h )
            {
                blocked = true;
                break;
            }
            
            if (park[ty][tx] == 'X')
            {
                blocked = true;
                break;
            }     
        }
        
        if (!blocked)
        {
            x += dx[dir_idx] * dist;
            y += dy[dir_idx] * dist;
        }

    }
    answer.push_back(y);
    answer.push_back(x);
    return answer;
}