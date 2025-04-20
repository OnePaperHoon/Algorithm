#include <string>
#include <vector>
#include <set>
#include <math.h>

using namespace std;

int solution(int a, int b, int c) {
    int answer = 0;
    set<int> temp{a, b, c};
    
    if (temp.size() == 3)
        return a + b + c;
    if (temp.size() == 2)
        return (a + b + c) * (pow(a, 2) + pow(b, 2) + pow(c, 2));
    if (temp.size() == 1)
        return (a + b + c) * (pow(a, 2) + pow(b, 2) + pow(c, 2)) * (pow(a, 3) + pow(b, 3) + pow(c, 3));
    return answer;
}