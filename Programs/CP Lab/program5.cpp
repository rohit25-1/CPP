#include <bits/stdc++.h>
using namespace std;

int longestValid(string s)
{
    int maxans = 0;
    stack<int> st;
    st.push(-1);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '[')
        {
            st.push(i);
        }
        else
        {
            st.pop();
            if (st.empty())
            {
                st.push(i);
            }
            else
            {
                maxans = max(maxans, i - st.top());
            }
        }
    }
    return maxans;
}

int main()
{

    string s;
    cin >> s;
    cout << longestValid(s);
    return 0;
}