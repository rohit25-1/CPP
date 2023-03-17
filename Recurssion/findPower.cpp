#include<iostream>
using namespace std;
//2 5-> 2*2*2*2*2
int findPower(int n,int pow)
{
    if(pow==0)
    {
        return 1;
    }
    int power=findPower(n,pow-1);
    return power*n;
}

int main()
{
    int n,pow;
    cin>>n>>pow;
    cout<<findPower(n,pow);
    return 0;
}