#include<iostream>
using namespace std;
class staticpgm
{
    private:
        int a,b,sum;
    public:
    static int check;
        staticpgm(int a1,int b1)
        {
            a=a1;
            b=b1;
        }
        void addition()
        {
            sum=a+b;
            cout<<sum;
        }

};
int staticpgm::check=10;//static variable can be accessed outside the class
int main()
{
    cout<<"initial value of check : "<<staticpgm::check;//static variables can be accesed without creating an object
    /*test ob(5,3);
    ob.addition();*/

}