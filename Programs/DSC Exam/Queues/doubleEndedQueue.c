#include <stdio.h>

#define MAX 10

int queue[MAX];
int front = -1;
int rear = -1;

void insertFront(int data)
{
    if (front == 0)
    {
        printf("Queue is Full\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
            rear = 0;
            queue[rear] = data;
        }
        else
        {
            queue[--front] = data;
        }
    }
}

void insertRear(int data)
{
    if (rear == MAX - 1)
    {
        printf("Queue is Full\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
            rear = 0;
            queue[rear] = data;
        }
        else
        {
            queue[++rear] = data;
        }
    }
}

int deleteFront()
{
    if (front == -1)
    {
        printf("Queue is Empty\n");
    }
    else if (front == rear)
    {
        int temp = queue[rear];
        front = -1;
        rear = -1;
        return temp;
    }
    else
    {
        return queue[front++];
    }
    return -1;
}
int deleteRear()
{
    if (front == -1)
    {
        printf("Queue is Empty\n");
    }
    else if (front == rear)
    {
        int temp = queue[rear];
        front = -1;
        rear = -1;
        return temp;
    }
    else
    {
        return queue[rear--];
    }
    return -1;
}

void print()
{
    int f = front, r = rear;
    while (f <= r)
    {
        printf("%d ", queue[f++]);
    }
    printf("\n");
}

int main()
{
    insertRear(10);
    insertRear(20);
    insertRear(30);
    print();
    deleteFront();
    print();
    deleteRear();
    print();
    insertFront(200);
    print();
}