#include <iostream>

using namespace std;
int main()
{
    int n = 234332424;
    int sum = 0;
    int mul = 1;
    while (n != 0)
    {
        mul = mul * (n % 10);
        sum = sum + (n % 10);
        n = n / 10;
    }
    cout << (mul - sum);
    std::cout << '\n';
    return 0;
}