#include <iostream>

using namespace std;
int main()
{
    unsigned int n = 00000000000000000000000000001011;
    int count = 0;
    while (n != 0)
    {
        if (n & 1)
            count++;
        n = n >> 1;
    }
    cout << count << "\n";
    std::cout << '\n';
    return 0;
}