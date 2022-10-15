#include <iostream>

using namespace std;

void insertionsort(int a[], int n)
{
    int val, j;
    for (int i = 1; i <= n - 1; i++)
    {
        val = a[i];
        j = i - 1;
        while (a[j] > val && j >= 0)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = val;
    }
}
void printArray(int a[], int n)
{
    for (size_t i = 0; i < n; i++)
    {
        std::cout << a[i] << "  ";
    }
    cout << "\n";
}

int main()
{
    int a[] = {3, 5, 2, 13, 6, 8, 5};
    int n = sizeof(a) / 4;
    printArray(a, n);
    insertionsort(a, n);
    printArray(a, n);
    std::cout << '\n';
    return 0;
}