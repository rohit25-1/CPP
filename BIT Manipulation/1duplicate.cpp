#include<bits/stdc++.h>
using namespace std;
int xorop(int arr[],int num)
{
    int xsum=0;
    for(int i=0;i<num;i++)
    {
        xsum=xsum^arr[i];
    }
    return xsum;

}
void method2(int arr[],int num)
{
    sort(arr,arr+num);
    int i=0;
    while(i<num)
    {
        if(arr[i]==arr[i+1])
        {
            i+=2;
        }
        else{
            cout<<arr[i]<<" ";
            i++;
        }
    }
}
int main()
{
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++)
        cin>>arr[i];
    method2(arr,num);

}