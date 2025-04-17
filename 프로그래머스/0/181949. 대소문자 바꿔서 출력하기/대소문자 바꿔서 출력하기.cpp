#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    
    for (int i = 0; str[i]; i++)
    {
        if (std::islower(str[i]))
            std::cout << static_cast<char>(std::toupper(str[i]));
        else if (std::isupper(str[i]))
            std::cout << static_cast<char>(std::tolower(str[i]));
        else
            std::cout << str[i];
    }
    std::cout << std::endl;
    return 0;
}