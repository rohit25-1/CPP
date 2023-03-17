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

void insertBeg(struct node **head, int value)
{
    struct node *n = (struct node *)(malloc(sizeof(struct node)));
    n->data = value;
    n->next = NULL;
    if (*head == NULL)
    {
        *head = n;
        return;
    }
    n->next = *head;
    *head = n;
}

void insert(struct node *pos, int value)
{
    struct node *n = (struct node *)(malloc(sizeof(struct node)));
    n->data = value;
    n->next = pos->next;
    pos->next = n;
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

int main()
{

    int data, i, choice, loop = 1, n;
    struct node *head = NULL, *temp;
    // clrscr();
    while (loop)
    {
        printf("1.Insert Element\n2.Print\n3.Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if (head == NULL)
            {
                printf("Enter Few Elements:\nEnter Number Of Elements:\n");
                scanf("%d", &n);
                printf("Enter The Elements:\n");
                for (int i = 0; i < n; i++)
                {
                    scanf("%d", &data);
                    insertEnd(&head, data);
                }
                continue;
            }
            else
            {
                printf("Enter The Element: ");
                scanf("%d", &data);
                if (head->data > data)
                    insertBeg(&head, data);

                else
                {
                    temp = head;
                    while (temp->next != NULL && temp->next->data < data)
                    {
                        temp = temp->next;
                    }
                    insert(temp, data);
                }
            }
            break;

        case 2:
            printf("Elements Are: \n");
            printLL(head);
            break;

        case 3:
            loop = 0;
            break;
        }
    }
    // getch();
    return 0;
}
