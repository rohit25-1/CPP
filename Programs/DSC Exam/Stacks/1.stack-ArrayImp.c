/* About Stacks:
    Stack is a linear data structure that follows LIFO Propery(Last In First Out) that allows insertion and deletion only at one End
    That is TOP OF STACK

    Operations On Stack:
        PUSH,POP,TOP

*/

// Array Implimentation Of Stack

#include <stdio.h>

#define MAX 10

int stack[MAX];
int top = -1;

void push(int data)
{
    if (top == MAX - 1)
    {
        printf("Stack Is FULL\n");
    }
    else
    {
        stack[++top] = data;
    }
}

int pop()
{
    if (top == -1)
    {
        printf("Stack Is Empty\n");
    }
    else
    {
        return stack[top--];
    }
}

int peek()
{
    return stack[top];
}

int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    return 0;
}

void print()
{
    for (int i = top; i >= 0; i--)
        printf("%d ", stack[i]);
    printf("\n");
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    print();
    pop();
    pop();
    print();
}