#include<iostream>
using namespace std;
int main()
{
    //* operator is used to show that a variable is a pointer and also is a de-addressing operator which converts an address to variable
    // & operator is used to create an alias and also used to get address of a variable
    int a=5;
    int *ptr=&a;
    cout<<*ptr<<endl;
    ptr=ptr+1;//you cannot do any arithmetic operations on ptr...operations can be done only by using de-referencing operator '*'
    cout<<*ptr;
    cout<<ptr;//gets the address of a
    cout<<*ptr;//gets the value stored in ptr
    cout<<&ptr;//gets the address of the pointer
    cout<<&a;//gets the address of a
    
    // & operator
    int a=5;
    int &b=a;//always needs to be initialized, cannot be delcared and initialized later
    //& operator creates an alias for a a variable a... it is used to call by reference in functions
    cout<<b<<endl;//for values changed in a reflects in b and vice versa
    cout<<a<<endl;
    cout<<&a<<endl;//both the address of a and b are the same
    cout<<&b;
}