#include <stdio.h>
#include <stdlib.h>
#define N 5;
int queue[5];
int front = -1;
int rear = -1;
void add()
{
    int x;
    if (front == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else if ((rear + 1) % 5 == front)
    {
        printf("queue is full");
    }
    else
    {
        rear = (rear + 1) % N;
        queue[rear] = x;
    }
}
void delete ()
{
    if (front == -1 && rear == -1)
    {
        printf("underflow");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % N;
    }
}
void Display()
{
    int i = front;
    if (front == -1 && rear == -1)
    {
        printf("queue is empty");
    }
    else
    {
        printf("the queue is:");
        while (i != rear)
        {
            printf("%d", queue[i]);
            i = (i + 1) % N;
        }
    }
    printf("%d", queue[rear]);
}
int main()
{
    int ch, x;
    while (1)
    {

        printf("\n 1.add 2.delete 3.Display 4.exit ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("enter elements to add");
            scanf("%d", &x);
            add(x);
            break;
        case 2:
            delete ();
            break;
        case 3:
            Display();
            break;
        case 4:
            exit(0);
            break;

        default:
            printf("\n DOLE ZAVALE AHET KA BHOSDICHYA");
            break;
        }
    }
}