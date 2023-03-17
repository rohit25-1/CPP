#include<iostream>
using namespace std;
int main()
{


    vector<int>a;
    a.push_back(2);
    a.push_back(4);
    a.push_back(6);
    a.push_back(8);
    cout<<a.size()<<endl;

    for(auto i:a)
    {
        cout<<i<<" ";

    }
    cout<<endl;

    return 0;
}