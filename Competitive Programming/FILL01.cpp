#include<bits/stdc++.h>  
  
#define ll long long int
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define vi vector<int>
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)


using namespace std;


void solve()
{
	int n,k;
	string s;
	cin>>n>>k;
	cin>>s;
	string check="";
	int ctr=0;
	for(int i=0;i<k;i++)
	{
		check+='0';

	}
	
	for(int i=0;i<n;i++)
	{
		if(s[i]!='0')
		{
			continue;
		}
		else
		{
			
			if(s.substr(i,k)==check && (i+k)<=n)
			{
				ctr++;
				i=i+k-1;
			}
		}
	}
	cout<<ctr<<endl;
	
	
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