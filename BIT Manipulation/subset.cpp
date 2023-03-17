/* logic:-
take a subset {1,2,3}
for element 1 check all the positions for 1 if one the print the corresponding array */
#include<iostream>
#include<cmath>
using namespace std;
void subsets(int arr[],int num)
{
    for(int i=0;i<pow(num,2);i++){
        cout<<"{";
        for(int j=0;j<num;j++)
        {
            if(i & (1<<j))
            {
                cout<<" "<<arr[j]<<" ";
            }
        }
        cout<<"}";
        cout<<endl;
    }
}
int main()
{
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++)
        cin>>arr[i];
    subsets(arr,num);
    return 0;
}
