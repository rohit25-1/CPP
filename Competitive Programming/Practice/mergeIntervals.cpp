#include<bits/stdc++.h>
using namespace std;


class node
{
public:
	int data1,data2;
	node* next;
	node(int val1,int val2)
	{
		data1=val1;
		data2=val2;
	}
};


void merge(vector<vector<int>>& intervals,node* &head)
{
	node* temp;
    for(int i=0;i<intervals.size();i++)
    {

    	node* n=new node(intervals[i][0],intervals[i][1]);
		if(head==NULL)
		{
			head=n;
			temp=n;
			continue;
		}
		temp->next=n;
		temp=n;

    }
    temp->next=NULL;
}

void compute(node* head)
{
	node* temp;
	while(head->next!=NULL)
	{
		// if(head->data1>=head->next->data1)
		// {
		// 	head->data1=head->next->data1;
		// }
		if(head->data2>=head->next->data1)
		{
			temp=head->next;
			head->data2=head->next->data2;
			if(head->next->next!=NULL)
				head->next=head->next->next;
			else
			{
				head->next=NULL;
				break;
			}
			delete temp;
		}
		head=head->next;
	}
	head->next=NULL;
}

vector<vector<int>> display(node* head)
{
	vector<vector<int>> a;
	while(head!=NULL)
	{
		a.push_back({head->data1,head->data2});
		// cout<<head->data1<<" "<<head->data2<<endl;
		head=head->next;
	}
	return a;
}


int main()

{
	node* head=NULL;
	vector<vector<int>> b{{1,4},{0,1}};
	merge(b,head);
	compute(head);
	vector<vector<int>> a=display(head);
	for(int i=0;i<a.size();i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
  

  
  return 0;
}