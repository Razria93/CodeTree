#include <iostream>
using namespace std;

int main() 
{
    int A_math, A_eng; 
    int B_math, B_eng; 

    std::cin >> A_math >> A_eng;
    std::cin >> B_math >> B_eng;

    std::cout << (A_math > B_math && A_eng > B_eng) << '\n';

    return 0;
}