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

int main()
{
    cout << "Enter The Decimal Number: ";
    int dec;
    cin >> dec;
    stack bin;
    while (dec != 0)
    {
        bin.push(dec % 2);
        dec = dec / 2;
    }
    print(bin);
}
