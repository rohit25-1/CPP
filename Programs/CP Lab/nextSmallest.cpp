#include <bits/stdc++.h>
using namespace std;

void previousSmallest(vector<int> arr)
{
    stack<int> st;
    st.push(-1);
    for (int i = 0; i < arr.size(); i++)
    {
        while (arr[i] <= st.top())
        {
            st.pop();
        }
        cout << st.top() << " ";
        st.push(arr[i]);
    }
}

void nextSmallest(vector<int> arr)
{
    stack<int> st;
    st.push(-1);
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        while (arr[i] <= st.top())
        {
            st.pop();
        }
        cout << st.top() << " ";
        st.push(arr[i]);
    }
}

int main()
{

    vector<int> arr{2, 0, 1, 4, 3};
    nextSmallest(arr);

    return 0;
}