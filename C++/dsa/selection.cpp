#include <iostream>

using namespace std;

void selectionSort(int a[], int n)
{
    for (size_t i = 0; i <= n - 2; i++)
    {
        int indexOfMin = i;
        for (size_t j = i + 1; j <= n - 1; j++)
        {
            if (a[j] < a[indexOfMin])
            {
                indexOfMin = j;
            }
        }
        int temp = a[i];
        a[i] = a[indexOfMin];
        a[indexOfMin] = temp;
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
    selectionSort(a, n);
    printArray(a, n);
    std::cout << '\n';
    return 0;
}