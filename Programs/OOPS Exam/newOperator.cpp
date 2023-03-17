#include <bits/stdc++.h>
using namespace std;

class helper
{
private:
    int n;

public:
    void *operator new(size_t length)
    {
        void *p = malloc(length);
        return p;
    }

    void operator delete(void *p)
    {
        free(p);
    }

    void display()
    {
        int n = 10;
        cout << n;
    }
};

int main()
{

    helper *n = new helper[10];
    (n + 9)->display();

    return 0;
}