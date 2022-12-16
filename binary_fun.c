#include<stdio.h>
float low,high,key,a[5],ans,i;
int mid;
void binary_search()
{
    low = 0; high = 5-1;
    mid = (low + high)/2;

    while(low <= high)
    {
        if(key == a[mid])
        {
            printf("Element found at location: %d",mid+1);
            break;
        }

        else if(key > a[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
        mid = (low + high)/2;
    }
    if(key != a[mid])
    {
        printf("Element not found\n");
    }
}
int main()
{
    //float low,high,key,a[5],ans;

    printf("Enter Any 5 elements of int//float//Negative//Positive\n");
    for(int i=0;i<5;i++)
    {
        scanf("%f",&a[i]);
    }

    printf("Enter Key:\n");
    scanf("%f",&key);

    binary_search();

}
