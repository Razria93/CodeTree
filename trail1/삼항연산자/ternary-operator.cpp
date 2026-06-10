#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int N;
    std::cin >> N;

    std::string result = N == 100 ? "pass" : "failure";

    std::cout << result << '\n';

    return 0;
}