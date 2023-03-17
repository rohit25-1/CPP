/* Queue is a linear data structure that follows first in first out property. Insertion happens at rear and deletion
    happens at the rear end..
    Queue operations: enqueue,dequeue.
    Application: Playlist in a music player
*/

#include <stdio.h>

#define MAX 10

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int data)
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
        return queue[front++];
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
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    print();
    printf("Dequeued: %d ", dequeue());
    printf("Dequeued: %d ", dequeue());
    printf("Dequeued: %d ", dequeue());
    printf("Dequeued: %d ", dequeue());
    printf("Dequeued: %d ", dequeue());
    print();
}