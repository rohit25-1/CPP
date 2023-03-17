#include <bits/stdc++.h>
using namespace std;

void findSubset(string str, string res)
{
    if (str.length() == 0)
    {
        cout << res << endl;
        return;
    }
    findSubset(str.substr(1), res);
    findSubset(str.substr(1), res + str[0]);
}

void findSubset(string str)
{
    int i = 0;
    while (i < (1 << str.length()))
    {
        int temp = i, loc = 0;
        while (temp != 0)
        {
            if (temp & 1)
            {
                cout << str[loc];
            }
            loc++;
            temp = temp >> 1;
        }
        i++;
        cout << endl;
    }
}

vector<vector<int>> findSubset(int arr[], int n)
{
    vector<int> ans1;
    vector<vector<int>> finans;
    int i = 0;
    while (i < (1 << n))
    {
        int temp = i, loc = 0;
        while (temp != 0)
        {
            if (temp & 1)
            {
                ans1.push_back(arr[loc]);
            }
            loc++;
            temp = temp >> 1;
        }
        finans.push_back(ans1);
        ans1.clear();
        i++;
    }
    return finans;
}

int main()
{
    int arr[] = {1, 2, 3};
    vector<vector<int>> ans=findSubset(arr, 3);
    // findSubset("ABC");
    // findSubset("123", "");
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();i++)
        {
            cout<<ans[i][j]<<" ";
        }
        // cout<<endl;
    }
    return 0;
}