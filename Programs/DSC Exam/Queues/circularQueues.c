#include <stdio.h>

#define MAX 3

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int data)
{
    if ((rear + 1) % MAX == front)
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
            rear = (rear + 1) % MAX;
            queue[rear] = data;
        }
    }
}

int dequeue()
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
        int temp = queue[front];
        front = (front + 1) % MAX;
    }
    return -1;
}

void print()
{
    int f = front, r = rear;
    while (f != r)
    {
        printf("%d ", queue[f]);
        f = (f + 1) % MAX;
    }
    printf("%d ", queue[f]);
    printf("\n");
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    dequeue();
    enqueue(40);
    print();
}