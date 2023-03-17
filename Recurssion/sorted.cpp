#include<iostream>
using namespace std;
bool sorted(int arr[],int n)
{
    if(n==1)
        return true;
    bool checkArray=sorted(arr+1,n-1);
    return (arr[0]<arr[1] && checkArray);
}
int main()
{
    int arr[]={1,3,5,9,4};
    int n=5;
    cout<<sorted(arr,n);
    return 0;
}