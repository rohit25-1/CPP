#include<iostream>
using namespace std;
int Getbit(int n,int pos)
{
    return ((n & (1<<pos))!=0);
}
int main()
{
    int num,pos;
    cin>>num;
    int i=4;
    while(i--){
    cout<<Getbit(num,i);
    }
    return 0;
}
 
