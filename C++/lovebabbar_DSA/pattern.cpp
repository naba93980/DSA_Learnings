#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int n;
    cout << "Enter n";
    cin >> n;
    // int i = 1, j = 1;
    // while (i <= n)
    // {
    //     j = 1;
    //     while (j <= n)
    //     {
    //         cout << i;
    //         j++;
    //     }
    //     cout << "\n";
    //     i++;
    // }

    // int i = 1, j = 0;
    // while (i <= n)
    // {
    //     j = i;
    //     while (j >= 1)
    //     // while (j <= (2*i-1))
    //     {
    //         cout << j <<" ";
    //         // j++;
    //         j--;
    //     }
    //     cout << "\n";
    //     i++;
    // }

    // int i = 1, j = 1;
    // char x = 'A';
    // while (i <= n)
    // {
    //     j = 1;
    //     // while (j <= n)
    //     while (j <= i)
    //     {
    //         cout << x;
    //         j++;
    //         x++;
    //     }
    //     cout << "\n";
    //     // x++;
    //     i++;
    // }

    // int i = 1, j = 1;
    // char x = 'A';
    // while (i <= n)
    // {
    //     j = 1;
    //     x = 'A' - 1;
    //     while (j <= i)
    //     {
    //         cout << (char)(x + i) << " ";
    //         x++;
    //         j++;
    //     }
    //     cout << "\n";
    //     i++;
    // }
    // int i = 1, j = 1;
    // while (i <= n)
    // {
    //     int space = n - i;
    //     while (space)
    //     {
    //         cout << "*";
    //         space--;
    //     }
    //     j = 1;
    //     while (j <= i)
    //     {
    //         cout << j;
    //         j++;
    //     }
    //     i++;
    //     cout << "\n";
    // }

    // Tough//

    int i = 1, j = 1;
    while (i <= n)
    {
        j = 1;
        int k = 1;
        while (j <= 2 * n - 1)
        {
            if ((j >= n - (i - 1)) && (j <= n + (i - 1)))
            {

                if (j >= n - (i - 1) && j < n)
                {
                    cout << k++;
                }
                if (j <= n + (i - 1) && j >= n)
                {
                    cout << k--;
                }
            }
            else
            {
                cout << " ";
            }
            j++;
        }
        cout << "\n";
        i++;
    }
    std::cout << '\n';
    return 0;
}