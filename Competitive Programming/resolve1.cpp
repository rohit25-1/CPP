#include<bits/stdc++.h>  
  

#define ll long long int
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define vi vector<int>
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define all(a) (a.begin(),a.end())


using namespace std;


void solve()
{
	ll n;
	cin>>n;
	ll arr[n];
	FOR(i,n)	cin>>arr[i];
	ll minEle=*min_element(arr,arr+n);
	int ctr=0;
	FOR(i,n)
	{
		if(arr[i]>minEle)
			ctr++;
	}
	cout<<(minEle*n)+ctr<<endl;
}



int main()
{
  int t;
  cin>>t;
  while(t--)
  {
  	solve();
  }

  return 0;
}