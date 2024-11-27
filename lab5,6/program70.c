#include<stdio.h>
int main()
{   
    int arr[10],f,count=0;
    printf("enter array of number\n ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("array is\n");
    for(int i=0;i<10;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n enter number u want to search\n");
    scanf("%d",&f);
    for(int i=0;i<10;i++)
    {   
        if(f==arr[i])
        {
            count++;
        }
    }
    printf("\nelemnt '%d' is present %d times",f,count);
    
    return 0;

}