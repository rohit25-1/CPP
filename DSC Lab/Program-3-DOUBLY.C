#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

void insertEnd(struct node **head, int value)
{
    struct node *n = (struct node *)(malloc(sizeof(struct node)));
    struct node *temp = *head;
    n->data = value;
    n->next = NULL;
    n->prev = NULL;
    if (*head == NULL)
    {
        *head = n;
        return ;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
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



void insertBefore(struct node **head, int value, int num)
{
    struct node *n = (struct node *)(malloc(sizeof(struct node)));
    struct node* temp=*head;
    n->data = num;
    n->next = NULL;
    n->prev = NULL;
    if (*head == NULL)
    {
        printf("Linked list is empty\n");
        return;
    }
    
    while (temp != NULL && temp->data != value)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf("Value Not Found in Linked List\n");
        return;
    }
    printf("%d\n", temp->data);
    n->prev = temp->prev;
    n->next = temp;
    if(n->prev!=NULL){
        n->prev->next = n;
    }
    temp->prev = n;
    if(n->prev==NULL)
    {
        *head=n;
    }
}

void deleteMiddle(struct node **start)
{
    struct node *slow = *start, *fast = *start;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    if (slow == *start)
    {
        *start = (*start)->next;
    }
    else
    {
        slow->prev->next = slow->next;
        if (slow->next != NULL)
        {
            slow->next->prev = slow->prev;
        }
        
    }
    printf("Deleted Element is %d\n",slow->data);
    free(slow);
}

int main()
{

    int data, i, choice, loop = 1, n;
    struct node *head = NULL;

    // clrscr();

    while (loop)
    {
        printf("1.Insert\n2.Insert Before\n3.Delete Middle\n4.Print LL\n5.Exit\nChoice: ");
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
            printf("Enter The Value: ");
            scanf("%d", &n);
            printf("Enter Element to be Inserted: ");
            scanf("%d", &data);
            insertBefore(&head, n, data);
            break;

        case 3:
            deleteMiddle(&head);
            break;

        case 4:
            printf("Elements Are: \n");
            printLL(head);
            break;

        case 5:
            loop = 0;
            break;
        }
    }
    // getch();
    return 0;
}
