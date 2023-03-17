#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a[]={2,3,4,5};
    cout<<&a<<endl<<a<<endl<<&a[0];//in any other array , displaying only  array name without index gives the address of the array
    char ch[]={"Rohit\0"};//" \0 " is added by default at the end of string
    cout<<ch;
    
}