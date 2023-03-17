#include <bits/stdc++.h>

#define ll long long int
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define vi vector<int>
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define gcd(a, b) __gcd(x, y)
#define copy(a, b, n) copy_n(source, n, target)

using namespace std;

bool check(long long int a, long long int b)
{
    if (a == 0 && b == 0)
    {
        return true;
    }
    if (a < 0 || b < 0)
    {
        return false;
    }
    return check(a - a, b - 2) + check(a - 2, b - 1);
}

void solve()
{

    long long int a, b;
    cin >> a >> b;
    if (check(a, b) >= 1)
    {
        cout << "Rahul\n";
    }
    else
    {
        cout << "Old Man\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // cout<<showpoint<<fixed<<setprecision(1);
    auto start = std::chrono::high_resolution_clock::now();

    // cout<<"Case #"<<i<<": ";
    solve();
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start);
    // cerr << "Time taken : " << ((long double)duration.count())/((long double) 1e9) <<"s "<< endl;
    return 0;
}
