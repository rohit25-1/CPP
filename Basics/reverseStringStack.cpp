#include<iostream>
#include<stack>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    stack<string> s;
    for(int i=0;i<str.length();i++)
    {
        string word="";
        while(str[i]!=' ' && i<str.length())
        {
            word+=str[i];
            i++;
        }
        s.push(word);
    }
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}