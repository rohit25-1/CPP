#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int data)
{

    stack[++top] = data;
}

int pop()
{

    return stack[top--];
}

int peek()
{
    return stack[top];
}

int isNum(char ch)
{
    if (ch >= '0' && ch <= '9')
        return 1;
    return 0;
}

void evaluate(char exp[])
{
    float ans = 0;
    for (int i = 0; i < strlen(exp); i++)
    {
        if (isNum(exp[i]))
        {
            push(exp[i] - '0');
        }
        else
        {
            int num1 = pop();
            int num2 = pop();
            switch (exp[i])
            {
            case '+':
                push(num2 + num1);
                break;
            case '-':
                push(num2 - num1);
                break;
            case '/':
                push(num2 / num1);
                break;
            case '*':
                push(num2 * num1);
                break;
            case '^':
                push(pow(num2, num1));
            }
        }
    }
    printf("%d", peek());
}

int main()
{
    char exp[100];
    printf("Enter An Expression: ");
    scanf("%s", exp);
    evaluate(exp);
}