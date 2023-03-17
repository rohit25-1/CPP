#include<iostream>
using namespace std;
int Setbit(int num,int pos)
{
    return ( num & ~( 1<<pos ) );
}
int main()
{
    int num,pos;
    cin>>num>>pos;
    cout<<Setbit(num,pos);
    return 0;
}