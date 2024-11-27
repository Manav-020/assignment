#include<stdio.h>
int main()
{
    int arr1[10],arr2[10],sum[10];
    printf("enter array of number\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter array of number\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<10;i++)
    {
        sum[i]=arr1[i]+arr2[i];
    }
    printf("\n array of sum is\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",sum[i]);
    }

    return 0;
}