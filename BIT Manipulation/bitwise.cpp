#include<iostream>
using namespace std;
int main()
{
    unsigned int a=5;
    cout<<(4^5)<<endl;
    cout<<(4|5)<<endl;
    cout<<(4&5)<<endl;
    a=~a;
    printf("~a = %d\n",a);

    return 0;
}