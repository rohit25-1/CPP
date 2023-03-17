#include<iostream>
using namespace std;
int power(int n)
{
    if(n==0)
        return 1;
    int ans=power(n-1);//2^4
    return n*ans;
}
int main()
{
    int n=2,pow=3;
    // cin>>n;
    cout<<power(n);
    return 0;
}
