#include<iostream>
using namespace std;
int main()
{
    int arr[4][4]={{1,4,7,11},{2,5,8,10},{3,6,9,16},{10,13,14,17}};
    int row=3;
    int column=0;
    int serEle=18;
    while(row<=3 && column<=3)
    {
        if(arr[row][column]==serEle)
        {
            cout<<"Found";
            break;
        }
        else if(arr[row][column]>serEle)
        {
            row--;
        }
        else{
            column++;
        }
    }

    return 0;
}

