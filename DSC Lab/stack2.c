#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int *array;
    int top;
};

void push(struct stack *s1, int data)
{
    if (s1->top == -1)
    {
        s1->array = malloc(sizeof(int));
        s1->top++;
        ((s1->array)[s1->top]) = data;
    }
    else
    {
        s1->array = realloc(s1->array, sizeof(int) * s1->top + 2);
        s1->top++;
        ((s1->array)[s1->top]) = data;
    }
}

void pop(struct stack *s1)
{

    if (s1->top == -1)
    {
        printf("Stack Has No Elements\n");
    }
    else
    {
        printf("Popped Element is %d\n", s1->array[s1->top]);
        s1->top--;
    }
}

void top(struct stack s1)
{
    if (s1.top == -1)
    {
        printf("Stack is empty\n");
    }
    else
        printf("Top: %d\n", s1.array[s1.top]);
}

void size(struct stack s1)
{
    printf("Size: %d\n", s1.top + 1);
}

int main()
{
    struct stack st;
    st.top = -1;
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
            push(&st, element);
            break;
        case 2:
            pop(&st);
            break;

        case 3:
            top(st);
            break;
        case 4:
            size(st);
            break;
        case 5:
            flag = 0;
            break;
        }
    }
    return 0;
}