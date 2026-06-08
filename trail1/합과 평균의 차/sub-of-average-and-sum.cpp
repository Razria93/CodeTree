#include <iostream>
using namespace std;

int main() 
{
    int a, b, c;
    std::cin >> a >> b >> c;

    int sum = a + b + c;
    int avr = sum / 3;

    std::cout << sum << '\n';
    std::cout << avr<< '\n';
    std::cout << sum - avr << '\n';

    return 0;
}