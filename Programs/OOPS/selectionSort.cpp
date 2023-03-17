#include <iostream>
using namespace std;

template <class T>
void sort(T *begin, T *end)
{
    int n = end - begin;
    T small, temp;
    for (int i = 0; i < n - 1; i++)
    {
        small = i;
        for (int j = i; j < n; j++)
        {
            if (begin[j] < begin[small])
            {
                small = j;
            }
        }
        T temp = begin[small];
        begin[small] = begin[i];
        begin[i] = temp;
    }
}

int main()
{

    int arr[] = {1, 8, 4, 5, 2, 7, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    for (auto i : arr)
        cout << i << " ";
}