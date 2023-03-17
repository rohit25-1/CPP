#include <bits/stdc++.h>
using namespace std;

// Function to return the
// remaining count of cakes
int cntCakes(int n, int m)
{

  // Sum for 1 cycle
  int sum = (n * (n + 1)) / 2;

  // no. of full cycle and remainder
  int quo = m / sum;
  int rem = m % sum;
  double ans = m - quo * sum;

  double x = (-1 + pow((8 * rem) + 1, 0.5)) / 2;

  ans = ans - x * (x + 1) / 2;

  return int(ans);
}

// Driver Code
int main()
{
  int n = 10;
  int m = 15;
  int ans = cntCakes(n, m);
  cout << (ans);
}