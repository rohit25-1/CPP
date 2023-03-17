#include <iostream>
using namespace std;

// 1 12 6 3 8 7 9 2
// 1 3 6 12 8 7 9 2 0

// ptr1=2,ptr2=
void swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

int pivot(int arr[], int start, int end)
{
    int ele = arr[end];
    int ptr1 = start;
    int ptr2 = end-1;
    while (ptr1 <= ptr2)
    {
        if (arr[ptr1] < ele)
        {
            ptr1++;
        }
        else
        {
            if (arr[ptr2] < ele)
            {
                swap(arr[ptr1], arr[ptr2]);
                ptr1++;
                ptr2--;
            }
            else
            {
                ptr2--;
            }
        }
    }
    swap(arr[end],arr[ptr1]);
    return ptr1;
}

void sort(int arr[], int start, int end)
{

    if (start < end)
    {
        int piv = pivot(arr, start, end);
        sort(arr, start, piv - 1);
        sort(arr, piv + 1, end);
    }
}

int main()
{

    int arr[] = {1,2,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,0,n-1);
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    return 0;
}