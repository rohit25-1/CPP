//A friend function is used to access private and protected variables outside the class
//public variables can be accessed without any hastle
//its not a member function of the class, so you need not use scope resolution operator
//using pointers in class- use -> instrad of . operator
//& operator converts the sent variable in function call into address and references the variable till the end of operation.
#include<iostream>
using namespace std;
class friendpgm
{
    private: int sum,a,b,sub;
    public:
    friend void addnum(friendpgm *ptr);
    friend void subnum(friendpgm &ob);
    void setdata(int s,int n,int m,int d)
    {
        sub=d;
        sum=s;
        a=n;
        b=m;
    }
    void check()
    {
        cout<<endl<<sum;
    }
};
void addnum(friendpgm *ptr)
{
    ptr->sum=ptr->a+ptr->b;
    cout<<ptr->sum<<endl;

}
void subnum(friendpgm &ob)
{
    ob.sub=ob.a-ob.b;
    cout<<ob.sub<<endl;

}
int main()
{
    friendpgm ob;
    ob.setdata(0,3,4,0);
    addnum(&ob);
    subnum(ob);
    ob.check();

}
