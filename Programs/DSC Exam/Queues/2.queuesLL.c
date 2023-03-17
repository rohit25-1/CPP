// Linked List Implementation of Stack

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *front = NULL, *rear = NULL;

struct node *createNode(int value)
{
    struct node *n = (struct node *)(malloc(sizeof(struct node)));
    n->data = value;
    n->next = NULL;
    return n;
}

void enqueue(int value)
{
    struct node *n = createNode(value);
    if (front == NULL)
    {
        front = n;
        rear = n;
        return;
    }
    rear->next = n;
    rear = n;
}

void dequeue()
{
    if (front == NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        struct node *temp = front;
        if (front == rear)
        {
            front = NULL;
            rear = NULL;
            free(temp);
            return;
        }
        front = front->next;
        free(temp);
    }
}

void print()
{
    struct node *temp = front;
    while (temp != rear)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d ", temp->data);
    printf("\n");
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    print();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    print();
}
