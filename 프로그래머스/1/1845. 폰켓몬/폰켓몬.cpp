#include <vector>
#include <map>
using namespace std;


int solution(vector<int> nums)
{
    int answer = 0;
    map<int, int> grid;
    
    for (int i = 0; i < nums.size(); i++)
    {
        grid[nums[i]] += 1;
    }
    return nums.size() / 2 < grid.size() ? nums.size() / 2 : grid.size();
}