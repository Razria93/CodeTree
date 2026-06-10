#include <iostream>
using namespace std;

int main() 
{
    int A, B;
    std::cin >> A >> B;

    int result = A >= B ? A : B;

    std::cout << result << '\n';    

    return 0;
}