#include<stdio.h>
#include<stdlib.h>
#define size 5
int queue[size],front = 0,rear = -1;
void insert()
{
    if(rear == size - 1)
    {
        printf("Queue is full\n");
    }
    else
    {
        int x;
        printf("Enter element to insert in queue\n");
        scanf("%d",&x);

        rear++;
        queue[rear] = x;
    }
}
void delete()
{
    if(front>rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        // front++;

        printf("Removed element is: %d\n",queue[front]);
        front++;
    }
}
void display()
{
    if(front>rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Elements are:\n");
        for(int i=front;i<=rear;i++)
        {
            printf("%d \n",queue[i]);
        }
    }
}
int main() {
    int ch;
    printf("1.Rear\n");
    printf("2.Front\n");
    printf("3.Show\n");
    printf("4.Exit\n");
    while(1) 
    {
        printf("Enter Choice:\n");
        scanf("%d",&ch);
        switch(ch) 
        {
            case 1: insert();
            break;
            case 2: delete();
            break;
            case 3: display();
            break;
            case 4: exit(0);
            break;
            default :
            printf("Invalid Choice\n");
        }
    }
}