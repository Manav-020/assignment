#include<stdio.h>
int main()
{
    int a[10],rev[10];
    printf("enter array of number\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=9,i=0;i<10,j>=0;i++,j--)
    {
        rev[j]=a[i];
    }
    printf("reverse of array is\n");
    for(int i=0;i<10;i++)
    {
        printf("%d\t",rev[i]);
    }

    return 0;
}