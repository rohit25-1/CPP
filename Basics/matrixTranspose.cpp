#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4][4]={{1,2,3,4},{7,1,9,5},{11,14,15,16},{43,53,62,75}};
    for(int i=0;i<4;i++)
    {
        for(int j=i;j<4;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}