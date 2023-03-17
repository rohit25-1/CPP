#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int arr[100]={0};
    for(int i=2;i*i<num;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i*i;j<num;j+=i)
            {
                arr[j]=1;
            }
        }
    }
    for(int i=2;i<num;i++)
        if(arr[i]==0)
            cout<<i<<endl;
    return 0;
}