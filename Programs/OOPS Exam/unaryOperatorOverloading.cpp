#include <bits/stdc++.h>
using namespace std;

class helper
{
public:
    int num;
    helper(int num)
    {
        this->num = num;
    }

    int operator++()
    {
        return ++num;
    }
    helper operator++(int)
    {
        num++;
        return *this;
    }
};

int main()
{

    helper a(10);
    a++;
    cout << a.num;

    return 0;
}