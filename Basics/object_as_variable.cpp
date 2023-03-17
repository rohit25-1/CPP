#include<iostream>
using namespace std;
class varobj
{
   
    public:varobj(int temp1,int temp2)
    {
        a=temp1;
        b=temp2;
        cout<<a<<""<<b<<endl;
    }
    varobj()
    {

    }
    int a,b;


};
varobj addnum(varobj n1,varobj n2)
{
    int sum=n1.a+n2.a;
    int sum2=n1.b+n2.b;
    varobj temp(sum,sum2);
    return temp;
}
int main()
{
    varobj ob(3,5),ob2(4,7),ob3;
    ob3=addnum(ob,ob2);
return 0;
}
