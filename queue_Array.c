#include<stdio.h>
#include<stdlib.h>
#define size 5
int queue[size],front = 0,rear = -1;
void insert()
{
    int ele;
    if(rear == size - 1)
    {
        printf("\nQueue is full");
    }
    else
    {
        printf("\nEnter Any ele to add into queue:");
        scanf("%d",&ele);
        rear++;
        queue[rear] = ele;
    }
}
void delete()
{
    if(front > rear)
    {
        printf("\nQueue is empty:");
    }
    else
    {
        //front++;
        printf("\nDeleted Element is: %d",queue[front]);
        front++;
    }
}
void display()
{
    if(front > rear)
    {
        printf("\nQueue is empty");
    }
    else
    {
        printf("Elements in queue are:\n");
        for(int i=front; i<=rear; i++)
        {
            printf("\n%d ",queue[i]);
        }
    }
}
int main()
{
    while(1)
    {
        int ch;
        printf("\nEnter 1.Insert\t2.Delete\t3.Display\t4.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            insert();
            break;

            case 2:
            delete();
            break;

            case 3:
            display();
            break;

            case 4:
            exit(0);
            break;

            default:
            printf("Invalid Choice\n");
        }
    }
}