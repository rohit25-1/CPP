#include <bits/stdc++.h>
using namespace std;

class doubleStack
{
    int *arr;
    int MAX;
    int top1, top2;

public:
    doubleStack(int n)
    {
        MAX = n;
        arr = new int[n];
        top1 = n / 2 + 1;
        top2 = n / 2;
    }

    void pushS1(int x)
    {

        if (top1 > 0)
        {
            top1--;
            arr[top1] = x;
        }
        else
        {
            cout << "Stack Overflow" << endl;
            return;
        }
    }

    void pushS2(int x)
    {

        if (top2 < MAX - 1)
        {
            top2++;
            arr[top2] = x;
        }
        else
        {
            cout << "Stack Overflow" << endl;
            return;
        }
    }

    int popS1()
    {
        if (top1 <= MAX / 2)
        {
            int x = arr[top1];
            top1++;
            return x;
        }
        else
        {
            cout << "No Elemenst in Stack" << endl;
        }
        return -1;
    }

    int popS2()
    {
        if (top2 >= MAX / 2 + 1)
        {
            int x = arr[top2];
            top2--;
            return x;
        }
        else
        {
            cout << "No Elemenst in Stack" << endl;
        }
        return -1;
    }
};

int main()
{
    doubleStack st(10);
    st.pushS1(15);
    st.pushS2(210);
    st.pushS2(135);
    st.pushS1(131);
    st.pushS2(71);
    cout << "Popped element from stack1 is "
         << ": " << st.popS1() << endl;
    st.pushS2(40);
    cout << "Popped element from stack2 is "
         << ": " << st.popS2() << endl;
    return 0;
}