#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "enter n \n";
    cin >> n;
    int i = 2;
    int flag = 0;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "not a prime";
            flag = 1;
            break;
        }
        i++;
    }
    if (flag == 0)
    {
        cout << "its a prime";
    }
    std::cout << '\n';
    return 0;
}