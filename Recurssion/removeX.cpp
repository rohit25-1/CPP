#include<iostream>
using namespace std;
string removeX(string str)
{
    if(str.length()==0)
    {
        return "";
    }
    string word=removeX(str.substr(1));
    if(str[0]=='x')
    {
        return word+str[0];
    }
    return str[0]+word;
}
int main()
{
    string name="xrxoxxhixt";
    cout<<removeX(name);
    return 0;
}