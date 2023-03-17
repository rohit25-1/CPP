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

void reverse(stack &original, int k)
{
    stack s1, s2;
    int temp = k;
    while (!original.isEmpty())
        s1.push(original.pop());

    while (k--)
    {
        s2.push(s1.pop());
    }
    while (!s2.isEmpty())
    {
        original.push(s2.pop());
    }
    while (!s1.isEmpty())
    {
        original.push(s1.pop());
    }
}

void print(stack s)
{
    while (!s.isEmpty())
    {
        printf("%d ", s.pop());
    }
}

int main()
{
    stack original;
    cout << "Enter Number of Elements in Stack: ";
    int num;
    cin >> num;
    int ele;
    cout << "Enter the stack elements: ";
    while (num--)
    {
        cin >> ele;
        original.push(ele);
    }
    cout << "Enter K: ";
    int k;
    cin >> k;
    reverse(original, k);
    cout << "Elements Are: \n";
    print(original);
}