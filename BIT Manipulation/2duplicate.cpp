#include<iostream>
using namespace std;
// 1 2 3 4 5 2 3 1
int extract(int num,int arr[])
{

    int xsum=0;
    for(int i=0;i<num;i++)
    {
        xsum=xsum^arr[i];//this gives the sum of 2 leftovers(4,5)
    }
    return xsum;

}
void find(int arr[],int sum,int num)//finds at what position the set bit is at
{
    int setbit=0;
    for(int i=0;setbit==0;i++)
    {
        if((sum & (1<<i))!=0)
        {
            setbit=i;
            break;
        }
    }
    int xorsum=0,xorsum2=0;
    for(int i=0;i<num;i++)
    {
        if((arr[i] & (1<<setbit))!=0)
        {
            xorsum=xorsum^arr[i];
        }
        if((arr[i] & (1<<setbit))==0)
        {
            xorsum2=xorsum2^arr[i];
        }
    }

    cout<<xorsum<<" "<<xorsum2;
}
int main()
{
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++)
        cin>>arr[i];
    int sum=extract(num,arr);
    find(arr,sum,num);
    return 0;
}