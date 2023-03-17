#include <iostream>
using namespace std;
#define MAX 100

class stack
{
    int arr[MAX];
    int top;

public:
    stack()
    {
        top = -1;
    }
    void push(int num)
    {
        top++;
        arr[top] = num;
    }

    int pop()
    {
        int temp = arr[top];
        top--;
        return temp;
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return 1;
        }
        return 0;
    }
};

void print(stack s)
{
    while (!s.isEmpty())
    {
        printf("%d ", s.pop());
    }
}

void insertBottom(stack &st, int ele)
{
    if (st.isEmpty())
    {
        st.push(ele);
        return;
    }
    int temp = st.pop();
    insertBottom(st, ele);
    st.push(temp);
}

int main()
{
    stack st;
    cout << "Enter Number Of Elements in Stack: ";
    int n;
    cin >> n;
    cout << "Enter Elements Of Stack: ";
    int ele;
    while (n--)
    {
        cin >> ele;
        st.push(ele);
    }
    int ins;
    cout << "Enter Element to be inserted: ";
    cin >> ins;
    insertBottom(st, ins);
    print(st);
}