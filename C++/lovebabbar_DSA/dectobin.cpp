#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int n = 100;
    int bit = 0;
    unsigned long long bin = 0;
    int i = 0;
    while (n != 0)
    {
        bit = (n & 1);
        bin = (bit * pow(10, i)) + bin; // ans = (bit * (10^i)) + ans;
        i++;
        n = n >> 1;
    }

    cout << bin << endl;
    int j = 0;
    int dec = 0;
    while (bin != 0)
    {
        dec = dec + (pow(2, j) * (bin % 10));
        bin = bin / 10;
        j++;
    }
    cout << dec;
    std::cout << '\n';
    return 0;
}