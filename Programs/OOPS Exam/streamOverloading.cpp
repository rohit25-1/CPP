#include <bits/stdc++.h>
using namespace std;

class helper
{
private:
    int num1, num2;

public:
    helper()
    {
        num1 = 10;
        num2 = 20;
    }

    friend istream& operator>>(istream& in, helper &ob)
    {
        in >> ob.num1 >> ob.num2;
        return in;
    }
};

int main()
{

    helper ob;
    cin >> ob;
    return 0;
}
