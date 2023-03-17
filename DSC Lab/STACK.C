#include <stdio.h>
#include <stdlib.h>

void push(int **stack, int top, int data)
{
    *((*stack) + top) = data;
}

void pop(int **stack, int top)
{
    printf("Popped Element is %d\n", *((*stack) + top));
    free((*stack) + top);
    top--;
}

int main()
{
    int top = -1, choice, *stack, element, flag = 1;
    clrscr();
    while (flag)
    {
	printf("1.Push\n2.Pop\n3.Top\n4.Size\n5.Exit\nChoice: ");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
	    if (top == -1)
	    {
		stack = malloc(sizeof(int));
		printf("Enter The Element To Be Pushed: ");
		scanf("%d", &element);
		push(&stack, top + 1, element);
		top++;
	    }
	    else
	    {
		stack = realloc(stack, sizeof(int) * top + 2);
		printf("Enter The Element To Be Pushed: ");
		scanf("%d", &element);
		push(&stack, top + 1, element);
		top++;
	    }
	    break;

	case 2:
	    if (top == -1)
	    {
		printf("Stack Has No Elements\n");
	    }
	    else
	    {
		pop(&stack, top);
		top--;
	    }
	    break;

	case 3:
	    if (top == -1)
	    {
		printf("Stack is empty\n");
	    }
	    else
		printf("Top: %d\n", stack[top]);
	    break;
	case 4:
	    printf("Size: %d\n", top + 1);
	    break;
	case 5:
	    flag = 0;
	    break;
	}
    }
    return 0;
}