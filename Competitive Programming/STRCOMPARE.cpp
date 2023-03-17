#include<iostream>
using namespace std;


int main()
{

  int t;
  cin>>t;
  while(t--)
  {
  	int n;
  	cin>>n;
  	string a,b;
  	cin>>a>>b;
    int i;
    bool flag=false;
  	for(i=0;i<n;i++)
  	{
  		if(a[i]==b[i])
  		{
  			continue;
  		}
  		flag=true;
  		break;
  	}
  	if(flag)
    cout<<i+1<<endl;
	else
		cout<<0<<endl;
  }

  
  return 0;
}