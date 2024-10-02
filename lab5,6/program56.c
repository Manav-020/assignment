#include<stdio.h>
int main()
{
    int arr[10],pos=0,neg=0,z=0;
    printf("enter array of number\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++)
    {
         if(arr[i]>0)
         {
            pos++;
         }
         else if(arr[i]<0)
         {
            neg++;
         }
         else{
            z++;
         }
    }
    printf("postive elements=%d\t negative elements=%d\t zero elements=%d",pos,neg,z);
}