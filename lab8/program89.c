#include<stdio.h>
int main()
{
    int arr[10],arr1[10];
    int *ptr;
    ptr=&arr[0];
    printf("enter array of number\n");
    for(int i=0,j=9;i<10,j>=0;i++,j--)
    {
        scanf("%d",&arr[i]);
        arr1[j]=*ptr;
        ptr++;
    }
    for(int i=0;i<10;i++)
    {
        printf("%d\t",arr1[i]);
        
    }
}