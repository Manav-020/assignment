#include<stdio.h>
int main()
{
    int arr[10],count=0;
    printf("enter array of number\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++)
    {
        if(arr[i]%2!=0)
        {
            count++;
        }
    }
    printf("number of odd numbers are=%d",count);
    return 0;
}