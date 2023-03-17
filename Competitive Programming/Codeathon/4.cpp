#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int ctr=0;
    while(n!=0)
    {
        if(n%3==0)
        {
            n=n-(2*(n/3));
            ctr++;
        }
        else if(n%2==0)
        {
            n=n-2;
            ctr++;
        }
        else{
            n=n-1;
            ctr++;
        }
    }
    cout<<ctr<<endl;
    return 0;
}