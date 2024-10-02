#include<stdio.h>
int main()
{
    int arr1[10],arr2[10],temp;
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
        temp=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp;
    }
    printf("\n array of 1 is\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",arr1[i]);
    }
    printf("\n array of 2 is\n");
    for(int i=0;i<10;i++)
    {
        printf("%d \t",arr2[i]);
    }

    return 0;

}