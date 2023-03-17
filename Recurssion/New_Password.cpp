#include <bits/stdc++.h>

#define ll long long int
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define vi vector<int>
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define gcd(a, b) __gcd(x, y)
#define copy(a, b, n) copy_n(source, n, target)

using namespace std;

void solve()

{
    int n;
    string str;
    cin >> n >> str;
    map<string, char> ans;
    ans["lc"] = 'a';
    ans["uc"] = 'A';
    ans["sc"] = '%';
    ans["dig"] = '1';
    string finAns = "";
    string app = "Aa$6t7tA";
    int uc = 0, lc = 0, sc = 0, dig = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            lc++;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            uc++;
        else if (str[i] >= '0' && str[i] <= '9')
            dig++;
        else
            sc++;
    }
    if (str.length() >= 7)
    {
        if (lc == 0)
            str += ans["lc"];
        if (uc == 0)
            str += ans["uc"];
        if (sc == 0)
            str += ans["sc"];
        if (dig == 0)
            str += ans["dig"];
        cout << str << endl;
    }
    else
    {
        finAns += str;
        if (lc == 0)
            finAns += ans["lc"];
        if (uc == 0)
            finAns += ans["uc"];
        if (sc == 0)
            finAns += ans["sc"];
        if (dig == 0)
            finAns += ans["dig"];
        if (finAns.length() < 7)
        {
            finAns += app.substr(8 - finAns.length());
        }
        cout << finAns << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // cout<<showpoint<<fixed<<setprecision(1);
    auto start = std::chrono::high_resolution_clock::now();
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case #" << i << ": ";
        solve();
    }
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start);
    // cerr << "Time taken : " << ((long double)duration.count())/((long double) 1e9) <<"s "<< endl;
    return 0;
}
