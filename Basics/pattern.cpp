#include<iostream>
using namespace std;
int main()
{
    cout<<"enter number ";
    int num;
    cin>>num;
    int init=num;
    bool check=true;
    for(int i=1;i<=(num*2)-1;i++)
    {
        int temp=num;
        int temp2=((num*2)-1)-(temp-init);
        for(int j=1;j<=(num*2)-1;j++)
        {
            if(j<temp2)
            {
                if(temp==init)
                {
                    cout<<temp<<" ";
                }
                else{
                    cout<<temp--<<" ";
                }
            }
            else
            {
                cout<<temp++<<" ";
            }

        }
        if(check)
        {
        init--;
        }
        else
        {
            init++;
        }
        if(init==1)
        {
            check=false;
        }
        cout<<endl;
    }
    return 0;
}