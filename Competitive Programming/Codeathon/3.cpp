#include <bits/stdc++.h>
using namespace std;

int checkPrec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

void convert(string s)
{

    stack<char> st;
    string ans;
    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            ans += c;
        else if (c == '(')
            st.push('(');
        else if (c == ')')
        {
            while (st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && checkPrec(s[i]) <= checkPrec(st.top()))
            {
                ans += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    cout << ans << endl;
}

int main()
{
    string s;
    cin >> s;
    convert(s);
    return 0;
}