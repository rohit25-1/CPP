#include<iostream>
using namespace std;
#define max 1000



class stack
{
    int *data;
    int top;
    public:
    stack()
    {
        data=new int();
        top=-1;
    }
    void push(int value)
    {
        if(top==max-1)
        {
            cout<<"Stack Overflow"<<endl;
            return;
        }
        data[++top]=value;
    }
    int pop()
    {
        if(top==-1)
        {
            cout<<"NO elements in Stack"<<endl;
            return -1;
        }
        return data[top--];
    }
    int gettop()
    {
        if(top==-1)
        {
            cout<<"No Element in Stack"<<endl;
            return -1;
        }
        return data[top];
    }
    bool isEmpty()
    {
        if(top==-1) return true;
        return false;
    }

};






int main() 
{

    stack st;
    st.push(10);
    st.push(2);
    st.push(30);
    st.push(56);
    cout<<st.gettop()<<endl;
    st.pop();
    cout<<st.isEmpty()<<endl;

    return 0;
}