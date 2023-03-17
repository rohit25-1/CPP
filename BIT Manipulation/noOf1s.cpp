#include<iostream>
using namespace std;
int nos(int num)
{
    int ctr=0;
    while(num)
    {
        num=num & num-1;
        ctr++;
    }
    return ctr;
}
int main()
{
    int num;
    cin>>num;
    cout<<nos(num);
    return 0;
}