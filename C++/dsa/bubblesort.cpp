#include <iostream>
using namespace std;
void bubbleSort(int *a, int n)
{
    int flag = 0;
    for (size_t i = 0; i <= (n - 2); i++)
    {
        for (size_t j = 0; j <= (n - 2) - i; j++)
        {
            if (a[j + 1] < a[j])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            cout << "broken";
            break;
        }
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
    int a[] = {9, 8, 7, 6, 5, 4};
    int n = sizeof(a) / 4;
    printArray(a, n);
    bubbleSort(a, n);
    printArray(a, n);
    std::cout << '\n';
    return 0;
}