#include<bits/stdc++.h>  
  
#define ll long long int
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define vi vector<int>
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)


using namespace std;


int getEvenpos(ll n,ll div)
{
	int ctr=0;
	while(div!=0)
	{
		ctr++;
		if((n/div)%2==0)
		{
			return ctr;;
		}
		div/=10;

	}
	return -1;
}
void solve()
{
	ll n;
	ll steps=0;
	cin>>n;
	if(n%2==0)
	{
		cout<<0<<endl;
		return;
	}

	ll len=to_string(n).length();
	ll div=pow(10,len-1);
	ll pos=getEvenpos(n,div);
	if(pos==-1)
	{
		cout<<-1<<endl;
		return;
	}
	string x=to_string(n);
	if(pos>1)
	{
		steps++;
		
		for(ll i=0;i<pos/2;i++)
		{
			swap(x[i],x[pos-1-i]);


		}
	}
	reverse(x.begin(),x.end());
	steps++;
	cout<<steps<<endl;


	
	
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