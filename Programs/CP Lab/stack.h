#include <iostream>
//store this file in the same folder as other programs 
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
