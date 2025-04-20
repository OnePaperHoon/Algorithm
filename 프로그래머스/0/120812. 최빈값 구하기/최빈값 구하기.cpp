#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> array) {
    int count[1000] = {0}; 
    int maxCount = 0;
    int mode = -1;
    bool duplicate = false;

    for (int i = 0; i < array.size(); i++)
    {
        count[array[i]]++;
    }

    for (int i = 0; i < 1000; i++)
    {
        if (count[i] > maxCount)
        {
            maxCount = count[i];
            mode = i;
            duplicate = false;
        } 
        else if (count[i] == maxCount && maxCount != 0) 
            duplicate = true;
    }

    return duplicate ? -1 : mode;
}