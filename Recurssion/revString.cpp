#include<iostream>
using namespace std;
void reverse(string s)
{
    if(s.length()==0)
    {
        return;
    }
    string sub=s.substr(1);
    reverse(sub);
    cout<<s[0];
}
int main()
{
    reverse("rohit");
    return 0;
}
