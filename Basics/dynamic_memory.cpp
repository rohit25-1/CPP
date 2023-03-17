//Dyamic memory allocation is done by using pointers as array
#include<iostream>
using namespace std;
int main()
{   
    cout<<"1"<<endl;
    int *p=new int();//new int() returns the memory address of the new dynamically allocated memory location
    cin>>*p;
    cout<<*p;
    cout<<endl<<"2"<<endl;
    cout<<"Enter The Size Of The Array";
    int size;
    cin>>size;
    int *ptr;
    ptr=new int[size];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<size;i++)
    {
        cin>>ptr[i];
    }
}