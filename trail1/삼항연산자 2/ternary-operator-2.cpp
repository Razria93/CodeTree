#include <iostream>
using namespace std;

int main() 
{
    int a;
    std::cin >> a;
    
    char result = a == 1 ? 't' : 'f';

    std::cout << result << '\n';

    return 0;
}