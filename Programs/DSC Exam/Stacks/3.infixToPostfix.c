#include <stdio.h>
#include <string.h>
#define MAX 100

char stack[MAX];
int top = -1;

void push(int data)
{

    stack[++top] = data;
}

char pop()
{

    return stack[top--];
}

char peek()
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

int precedence(char op)
{
    if (op == '^')
        return 3;
    else if (op == '/' || op == '*')
        return 2;
    else if (op == '+' || op == '-')
        return 1;
    return 0;
}

int isAlpha(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return 1;
    return 0;
}

void evaluate(char exp[])
{
    for (int i = 0; i < strlen(exp); i++)
    {
        if (exp[i] == '(')
            push(exp[i]);
        else if (exp[i] == ')')
        {
            while (peek() != '(')
                printf("%c", pop());
            pop(); // pop out the opening brackets
        }
        else if (isAlpha(exp[i]))
            printf("%c", exp[i]);

        else
        {
            while (precedence(peek()) >= precedence(exp[i]))
            {
                printf("%c", pop());
            }
            push(exp[i]);
        }
    }
    while (!isEmpty())
    {
        printf("%c", pop());
    }
}

int main()
{
    char exp[100];
    printf("Enter An Expression: ");
    scanf("%s", exp);
    evaluate(exp);
}