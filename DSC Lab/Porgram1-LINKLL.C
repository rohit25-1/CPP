#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void insertEnd(struct node **head, int value)
{
    struct node *n = (struct node *)(malloc(sizeof(struct node)));
    struct node *temp = *head;
    n->data = value;
    n->next = NULL;
    if (*head == NULL)
    {
        *head = n;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void printLL(struct node *head)
{
    while (head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void deleteBeg(struct node **head)
{
    struct node *temp = *head;
    if (*head == NULL)
    {
        printf("Linked List Is Empty\n");
        return;
    }

    *head = (*head)->next;
    printf("Deleted Element is %d\n", temp->data);
    free(temp);
}

int main()
{

    int data, i, choice, loop = 1, n;
    struct node *head = NULL;

    // clrscr();

    while (loop)
    {
        printf("1.Insert At End\n2.Delete From Beginning\n3.Print LL\n4.Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter Number Of Elements: ");
            scanf("%d", &n);
            printf("Enter Elements:\n");
            for (i = 0; i < n; i++)
            {
                scanf("%d", &data);
                insertEnd(&head, data);
            }
            break;

        case 2:
            deleteBeg(&head);
            break;

        case 3:
            printf("Elements Are: \n");
            printLL(head);
            break;

        case 4:
            loop = 0;
            break;
        }
    }
    // getch();
    return 0;
}
