#include<iostream>
using namespace std;
void piReplace(string str)
{
    if(str.length()==0)
    {
        return;
    }
    if(str[0]=='p' && str[1]=='i')
    {
        cout<<"3.14";
        piReplace(str.substr(2));
    }
    else
    {
        cout<<str[0];
        piReplace(str.substr(1));
    }
}
int main()
{
    piReplace("pipxpxppxxpipi");
    return 0;
}