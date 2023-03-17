#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


pair<pair<int,int>,bool> functional(int arr[],int n,int key)
{
	int l=0,r=n-1;
	while(l<r)
	{
		if((arr[l]+arr[r])==key)
		{
			return {{arr[l],arr[r]},true};
		}
		if((arr[l]+arr[r])>key)
		{
			r--;
		}
		else if((arr[l]+arr[r])<key)
		{
			l++;
		}
	}
	return {{0,0},false};
}

int main()
{

  int arr[]={3,2,4};

  int n=sizeof(arr)/sizeof(arr[0]);
  sort(arr,arr+n);
  int checkNum=6;
  pair<pair<int,int>,bool> ans=functional(arr,n,checkNum);
  if(ans.second)
  {
  	cout<<ans.first.first<<" "<<ans.first.second;
  }
  else
  {
  	cout<<"Element Not Possible ";
  }


  
  return 0;
}