#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    int fact=factorial(n-1)*n;
    return fact;
}
int main()
{
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}