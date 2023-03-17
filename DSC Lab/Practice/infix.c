#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch)
{
    stack[++top] = ch;
}

char pop()
{
    int ans = stack[top];
    top--;
    return ans;
}

char stop()
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

int precedence(char ch)
{
    if (ch == '^')
        return 3;
    else if (ch == '/' || ch == '*')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    else if (ch == '(' || ch == ')')
    {
        return 0;
    }
    return -1;
}

int isAlpha(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        return 1;
    }
    return 0;
}



void operation(char exp[])
{
    for (int i = 0; i < strlen(exp); i++)
    {
        if (exp[i] == '(')
        {
            push(exp[i]);
        }
        else if (isAlpha(exp[i]))
        {
            printf("%c", exp[i]);
        }
        else if (exp[i] == ')')
        {
            while (stop() != '(')
                printf("%c", pop());
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
    while (!isEmpty())
    {
        printf("%c ", pop());
    }
}

int main()
{
    printf("Enter Expression: ");
    char ch[100];
    scanf("%s", ch);
    operation(ch);
}