#include<stdio.h>
int main()
{
    int arr[10],sum=0;
    printf("enter array of number\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++)
    {
        sum+=arr[i];
    }
    printf("sum of array is=%d",sum);

    return 0;
}