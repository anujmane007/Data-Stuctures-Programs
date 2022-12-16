#include<stdio.h>
int main()
{
    int a[10],key,i,j;
    printf("enter number\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<10;i++)
    {
        key = a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1] = a[j];
            j=j-1;
        }
        a[j+1] = key;
    }

    printf("Sorted Numbers are\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);

    }
}
