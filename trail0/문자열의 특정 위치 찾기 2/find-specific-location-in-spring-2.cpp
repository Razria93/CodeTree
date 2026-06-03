#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    std::vector<std::string> v = 
    { "apple", "banana", "grape", "blueberry", "orange" };

    char c;
    std::cin >> c;

    int count = 0;

    for (int i = 0; i < 5; ++i)
    {
        if (v[i][2] == c || v[i][3] == c)
        {
            std::cout << v[i] << '\n';
            ++count;
        }
    }

    std::cout << count;

    return 0;
}