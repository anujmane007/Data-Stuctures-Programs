//1.Write a program to implement stack using array
#include<stdio.h>
#include<stdlib.h>
int stack[5],top=-1;
void push() {
    int item;
    if(top==5-1)
    {
        printf("Stack is full:\n");
    }
    else
    {
        printf("Enter Push element in stack\n");
        scanf("%d",&item);
        top=top+1;
        stack[top] = item;
    }
}
void pop() {
    if (top==-1)
    {
        printf("Stack is Empty:\n");
    }
    else
    {
        printf("Popped %d\n",stack[top]);
        top=top-1;
    }
}
void show() {
    int i;
    if(top>=0)
    {
        printf("Stack Element is:\n");
        for(i=top;i>=0;i--)
        {
            printf("%d ",stack[i]);
        }
    }
    else
    {
        printf("Stack is empty\n");
    }
}
void peek() {
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Peek Element is:%d\n",stack[top]);
    }
}
int main() {
    int ch;
    printf("Enter 1.For Push\n");
    printf("Enter 2.For Pop\n");
    printf("Enter 3.For Peek\n");
    printf("Enter 4.For Show\n");
    printf("Enter 5.For Exit\n");
    while(1) {
        printf("Enter Choice:\n");
        scanf("%d",&ch);

        switch(ch) {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:peek();
            break;
            case 4:show();
            break;
            case 5:exit(0);
            break;
            default:
            printf("Invalid Option\n");
        }
    }
}