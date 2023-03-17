#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ofstream var("temp.txt",ios::app);
    cout<<"Enter Your Name:";
    char name[100];
    cin.getline(name,100);
    var<<name<<endl;
    ifstream var2("temp.txt");
    string name2;
    while(getline(var2,name2))
        cout<<name2;
    /* or you can use
    char name2[100];
    var2.getline(name2,100);
    */
    
}
