#include <stdio.h>
#define MAX 100
#include <string.h>
char stack[MAX];
int top = -1;

void push(char n)
{
    stack[++top] = n;
}

char pop()
{
    int ans = stack[top];
    top--;
    return ans;
}

int precedence(char op)
{
    if (op == '^')
    {
        return 3;
    }
    else if (op == '/' || op == '*')
    {
        return 2;
    }
    else if (op == '+' || op == '-')
    {
        return 1;
    }
    else if (op == '(' || op == ')')
    {
        return 0;
    }
    return -1;
}

int isAlpha(char ch)
{
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        return 1;
    }
    return 0;
}



int isEmpty()
{
    if (top == -1)
        return 1;
    return 0;
}

char stop()
{
    return stack[top];
}

void convert(char exp[])
{
    for(int i=0;i<strlen(exp);i++)
    {
        if (isAlpha(exp[i]))
        {
            printf("%c", exp[i]);
        }
        else if (exp[i] == '(')
        {
            push(exp[i]);
        }
        else if (exp[i] == ')')
        {
            while (stop() != '(')
            {
                printf("%c", pop());
            }
            pop();
        }
        else
        {
            while (!isEmpty() && precedence(stop()) >= precedence(exp[i]))
            {
                printf("%c", pop());
            }
            push(exp[i]);
        }
    }
    while(!isEmpty())
    {
        printf("%c",pop());
    }
}

int main()
{
    printf("Enter The Expression: ");
    char exp[100];
    scanf("%s", exp);
    convert(exp);
}