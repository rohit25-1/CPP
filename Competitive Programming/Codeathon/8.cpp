#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int a;
    cin>>a;
    int arr[n];
    for(auto &i:arr)
        cin>>i;
    sort(arr,arr+n);
    cout<<(arr[n-1]-a)+(arr[n-2]-a)<<endl;
    return 0;
}