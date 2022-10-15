#include <iostream>
using namespace std;
int found = 0;
int binarysearch(int *a, int begin, int end, int val)
{
    int mid = begin + (end - begin) / 2;
    if (a[mid] == val)
        return 1;
    if (begin > end)
        return 0;
    else
    {
        if (val < a[mid])
            found = binarysearch(a, begin, mid - 1, val);
        else
            found = binarysearch(a, mid + 1, end, val);
    }
    return found;
}

int main()
{
    int a[] = {3, 5, 8, 99, 345};
    cout << binarysearch(a, 0, 4, 786);
    std::cout << '\n';
    return 0;
}