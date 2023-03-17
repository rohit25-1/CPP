#include<iostream>
using namespace std;
int findSum(int n)
{
    if(n==0)
    {
        return 0;
    }
    int prevSum=findSum(n-1);
    return n+prevSum;
}
int main()
{
    // int n;
    // cin>>n;
    cout<<findSum(5);
    return 0;
}