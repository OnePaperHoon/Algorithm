#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;


// data [code, date, maximum, remain]
// 기준 데이터 ext string
// 기준 값 ext
// 정렬 할 기분 sort_by
vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    unordered_map<string, int> colIndex = {
        {"code", 0},
        {"date", 1},
        {"maximum", 2},
        {"remain", 3}
    };
    
    int ext_index  = colIndex[ext];
    int sort_index = colIndex[sort_by];
    
    for (auto& row : data) {
        if (row[ext_index] < val_ext) {
            answer.push_back(row);
        }
    }
    
     sort(answer.begin(), answer.end(), [sort_index](const vector<int>& a, const vector<int>& b)
    {
        return a[sort_index] < b[sort_index];
    });
    
    return answer;
}