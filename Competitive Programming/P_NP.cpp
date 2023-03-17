#include<bits/stdc++.h>  
  
#define ll long long int
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define vi vector<int>
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)


using namespace std;

int temp(int np,int p,int n,int sum)
{	
	if(np==p)
	{
		return sum; 
	}
	if(np>0)
	{
		return -1;
	}

	temp(np-1,p+2,n,sum++);
	temp(np+1,p,n-2,sum++);
	temp(np+1,p-1,n,sum++);
	return 0;

}

void solve()
{
	string s;
	cin>>s;
	int ctr=0;
	int n=0,p=0,np=0;
	for(int i=0;i<s.length();i++)
	{
		if(i<s.length()-1 && s[i]=='N' && s[i+1]=='P')
		{
			np++;
			i++;
			continue;
		}
		
		else if(s[i]=='N')
		{
			n++;
			continue;
		}
		else if(s[i]=='P')
		{
			p++;
			continue;
		}
	}
	if(np==(n+p))
	{
		cout<<0<<endl;
		return;
	}
	cout<<temp(np,p,n,0)<<endl;

	
	
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