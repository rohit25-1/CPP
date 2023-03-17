#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    int size;
};

void push(struct node **stack, int value)
{
    struct node *n = (malloc(sizeof(struct node)));
    if (*stack == NULL)
    {
        *stack = n;
        (*stack)->size = 1;
        return;
    }
    n->next = *stack;
    *stack = n;
    (*stack)->size++;
}

void pop(struct node **stack)
{
    if (*stack == NULL)
    {
        printf("Stack Is Empty\n");
        return;
    }
    struct node *temp = *stack;
    *stack = (*stack)->next;
    printf("Popped Element is %d\n", (*stack)->data);
    free(temp);
    (*stack)->size--;
}

void top(struct node *stack)
{
    if (stack == NULL)
    {
        printf("Stack is empty\n");
    }
    else
        printf("Top: %d\n", stack->data);
}

void size(struct node *stack)
{
    printf("Size: %d\n", stack->size);
}

int main()
{
    struct node *stack = NULL;
    int choice, element, flag = 1;
    while (flag)
    {
        printf("1.Push\n2.Pop\n3.Top\n4.Size\n5.Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter The Element To Be Pushed: ");
            scanf("%d", &element);
            push(&stack, element);
            break;
        case 2:
            pop(&stack);
            break;

        case 3:
            top(stack);
            break;
        case 4:
            size(stack);
            break;
        case 5:
            flag = 0;
            break;
        }
    }
    return 0;
}