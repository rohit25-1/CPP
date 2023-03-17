#include <cmath>
#include <cstdio>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int largestRectangleArea(vector<int> &arr)
{
    stack<int> st;
    int top;
    int max_area = 0;
    int areatop;
    int i = 0;
    int n = arr.size();
    while (i < n)
    {
        if (st.empty() || arr[st.top()] <= arr[i])
            st.push(i++);
        else
        {
            top = st.top();
            st.pop();

                if(arr[top]*(st.empty()))
               {
                areatop = i;
               }
               else{
                areatop = i - st.top() - 1;
               }
                max_area = max(max_area,areatop);
        }
        while (!st.empty())
        {
            top = st.top();
            st.pop();
            if(arr[top]*(st.empty()))
               {
                areatop = i;
               }
               else{
                areatop = i - st.top() - 1;
               }
            max_area = max(max_area,areatop);
        }
        return max_area;
    }
}

    int main()
    {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &i : arr)
            cin >> i;
        cout << largestRectangleArea(arr);
        return 0;
    }
