#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int arr[100]={0};
    for(int i=1;i<=num;i++)
        arr[i]=i;
    for(int i=2;i*i<=num;i++)
    {
        if(arr[i]==i)
        {
            for(int j=i*i;j<=num;j+=i)
            {
                if(arr[j]==j)
                arr[j]=i;
            }
        }
    }
    while(num>1)
    {
        cout<<arr[num]<<" "<<endl;
        num=num/arr[num];
        
    }

    return 0;
}