#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter 2 Numbers: ";
    int a,b,div;
    cin>>a>>b;
    try
    {
        if(b==0)
        {
            throw b;
        }
        div=a/b;
        cout<<div;
    }
    catch(int b)
    {
        cout<<"Cannot Divide BY 0";
    }
    
    
}