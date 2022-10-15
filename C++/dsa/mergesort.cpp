#include <iostream>
using namespace std;
void merge(int *a, int left, int mid, int right)
{
    int subArrayOne = mid - left + 1;
    int subArrayTwo = right - mid;

    // create temp array
    int *leftArray = new int[subArrayOne];
    int *rightArray = new int[subArrayTwo];

    // Copy data to temp arrays leftArray[] and rightArray[]
    for (size_t i = 0; i < subArrayOne; i++)
    {
        leftArray[i] = a[left + i];
    }
    for (size_t i = 0; i < subArrayTwo; i++)
    {
        rightArray[i] = a[mid + 1 + i];
    }

    int indexOfSubArrayOne = 0, indexOfSubArrayTwo = 0, indexOfMergedArray = left;
    while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo)
    {
        if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo])
        {
            a[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else
        {
            a[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // left[], if there are any
    while (indexOfSubArrayOne < subArrayOne)
    {
        a[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // right[], if there are any
    while (indexOfSubArrayTwo < subArrayTwo)
    {
        a[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
    delete[] leftArray;
    delete[] rightArray;
}

void mergesort(int *a, int begin, int end)
{
    if (begin >= end)
        return;
    int mid = begin + (end - begin) / 2;
    mergesort(a, begin, mid);
    mergesort(a, mid + 1, end);
    merge(a, begin, mid, end);
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
    mergesort(a, 0, 5);
    printArray(a, n);
    std::cout << '\n';
    return 0;
}