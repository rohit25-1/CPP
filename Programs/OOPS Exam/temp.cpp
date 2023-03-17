#include <bits/stdc++.h>
using namespace std;
class base
{
public:
    int val;
     void display()
    {
        cout << val;
    }
};

class derived : public base
{
public:
    int val;
    void display()
    {
        cout << val;
    }
};

int main()
{

    base *ptr = new derived;
    ptr->val = 10;
    ptr->display();
    return 0;
}