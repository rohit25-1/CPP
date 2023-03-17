/* 1.LCM
*/
#include<iostream>
using namespace std;
int lcm(int num1,int num2)
{
    int num=max(num1,num2);
    int arr[100]={0};
    for(int i=2;i<=num;i++)
        arr[i]=i;
    for(int i=2;i<=num;i++)
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
    int prod=1;
    while(num1>1)
    {
        prod*=arr[num1]*arr[num2];
        num1/=arr[num1];
        num2/=arr[num2];
    }
    return prod;

}
//GCD Algorithm- take the 2 numbers and keep modding them until u get zero and the last number with which it was modded is the gcd
int gcd(int num1,int num2)
{
    while(num2!=0)
    {
        int rem=num1%num2;
        num1=num2;
        num2=rem;
    }
    return num1;
}
int main()
{
    int num1,num2;
    cin>>num1>>num2;
    cout<<lcm(num1,num2);
    // cout<<gcd(num1,num2);
    return 0;
}