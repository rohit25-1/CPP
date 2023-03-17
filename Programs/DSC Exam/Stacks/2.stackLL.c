// Linked List Implementation of Stack

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *stack = NULL;

struct node *createNode(int value)
{
    struct node *n = (struct node *)(malloc(sizeof(struct node)));
    n->data = value;
    n->next = NULL;
    return n;
}

void push(int value)
{
    struct node *n = createNode(value);
    n->next = stack;
    stack = n;
}

void pop()
{
    if (stack == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        struct node *temp = stack;
        stack = stack->next;
        free(temp);
    }
}

int peek()
{
    return stack->data;
}

void print()
{
    struct node *temp = stack;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
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
    pop();
    pop();
    pop();
    print();
}
