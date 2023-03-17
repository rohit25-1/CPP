#include<iostream>
using namespace std;
int check(int num)
{
    return ((num & num-1)==0);
}
int main()
{
    int num;
    cin>>num;
    if(check(num)!=0) 
    cout<<"Power OF 2";
    else 
    cout<<"Not A Power Of 2";
    return 0;
}