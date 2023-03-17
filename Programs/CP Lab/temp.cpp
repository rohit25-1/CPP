#include<iostream>

using namespace std;


int convert(string str)
{
    if(str.length()==0)
        return 0;
    return 2*int(str[0]-'0')+2*convert(str.substr(1));
}


int main()
{
    string bin="10101010";
    cout<<convert(bin);
}