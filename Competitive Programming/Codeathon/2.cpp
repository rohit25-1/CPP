#include<bits/stdc++.h>
using namespace std;

void findPerm(string s,string temp)
{
    if(s.length()==0)
    {
        cout<<temp<<endl; 
    }
    for(int i=0;i<s.length();i++)
    {
        findPerm(s.substr(0,i)+s.substr(i+1),temp+s[i]);
    }
}


void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    findPerm(s,"");
}


int main()
{

    solve();
    return 0;
}