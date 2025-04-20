#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int odd;
    int even;
    string oddStr = "";
    string evenStr = "";
    
    for (int i = 0; i < num_list.size(); i++)
    {
        if (num_list[i] % 2 == 0)
        {
            evenStr += std::to_string(num_list[i]);
        }
        else if (num_list[i] % 2 != 0)
            oddStr += std::to_string(num_list[i]);
    }
    odd = std::stoi(oddStr);
    even = std::stoi(evenStr);
    answer = odd + even;
    return answer;
}