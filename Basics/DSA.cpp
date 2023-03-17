//5!=5*4*3*2*1
#include <iostream>//io to console
#include<fstream>//filestream--> io to file
using namespace std;
class dsa
{
public:
    static int a,b,sum;
    void factorial()
    {
        cout<<"Enter The Number To Find Factorial ";
        int num,factorial=1;
        cin>>num;
        for(int i=1;i<=num;i++)
        {
            factorial*=i;
        }
        printf("%d",factorial);
    }
    void palindrome()
    {
        //123->321----> 3->(30+2)->(320+1)
        cout<<"enter the number: ";
        int num,temp,n,sum=0;
        cin>>num;
        temp=num;
        while (temp!=0)
        {
            n=temp%10;//3-2
            sum=(sum*10)+n;//3-
            temp=temp/10;//12
        }
        cout<<sum;
    }
    void fibonacci()
    {
        //1+2+3+5+8+13+21
        //add previous 2 numbers
        int num1,num2,sum,limit;
        num1=1;
        num2=2;
        cout<<"enter limit of series: ";
        cin>>limit;
        cout<<num1<<" "<<num2<<" ";
        for(int i=1;i<=limit;i++)
        {
            sum=num1+num2;
            cout<<sum<<" ";
            num1=num2;
            num2=sum;


        }
    }
    void arrop()
    {
        cout<<"Enter the number of elements: ";
        int number;
        cin>>number;
        int a[number];
        int b[number];
        int add[number],subtract[number],multiply[number],divide[number];
        cout<<"Enter The Elements in A array";
        for (int i=0;i<number;i++)
        {
            cin>>a[i];
        }
        cout<<"Enter The Elements in B array";
        for (int i=0;i<number;i++)
        {
            cin>>b[i];
        }
        for (int i=0;i<number;i++)
        {
            add[i]=a[i]+b[i];
            subtract[i]=a[i]-b[i];
            divide[i]=a[i]/b[i];
            multiply[i]=a[i]*b[i];
        }
        for (int i=0;i<number;i++)
        {
            cout<<add[i]<<endl;
            cout<<subtract[i]<<endl;
            cout<<divide[i]<<endl;
            cout<<multiply[i]<<endl;
        }
    }
    void twodim()
    {
        int arr[5][3];
        cout<<"Enter the elements of the array"<<endl;
        for(int i=0;i<5;i++)
        {
            for (int j=0;j<3;j++)

            {
                cin>>arr[i][j];
            }
        }
        for(int i=0;i<5;i++)
        {
            for (int j=0;j<3;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        int sum[5]={0,0,0,0,0};
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<3;j++)
            {
                sum[i]+=arr[i][j];
            }

        }
        for(int i=0;i<5;i++)
        {
            cout<<sum[i]<<" ";
        }
    }

    void pointers()
    {
        int a=5;
        int *p;
        p=&a;
        cout<<*p++<<endl<<a;
        //*p stores the address of the variable a... so any changes to *p changes a;
        //&p will store an alias of variable a with same address... so any changes to &p will change even a and the opposite
        //if your using pointers as a class variable or structure variable then replace . operator with ->
    }
    void ehandling()
    {
        int a,b,div;
        cout<<"Enter 2 numbers : "<<endl;
        cin>>a>>b;
        try{
            if(b==0)
            {
                throw b;
            }
            if(b==1)
            {
                throw 'c';
            }
            div=a/b;
            cout<<div<<endl;
        }
        catch(int ex)
        {
            cout<<"Denominator Zero Not Allowed";
        }
        catch (char ch)
        {
            cout<<"checking";
        }
    }
    void filehandling()
    {
        cout<<"Enter Your Full Name And Age ";
        int age;
        char name[100];
        cin.getline(name,100);
        cin>>age;
        ofstream myfile("newFile.txt",ios::app);//outputfile stream with type append
        myfile<<name<<endl<<age<<endl;
        ifstream ob("newFile.txt");
        string ch;
        while(getline(ob,ch))
            cout<<ch<<endl;

    }




};
int main() {
    dsa obj;
//    obj.factorial();
//    obj.palindrome();
//    obj.fibonacci();
//    obj.arrop();
//    obj.twodim();
//    obj.pointers();
//    obj.ehandling();
//    obj.filehandling();
    return 0;
}

