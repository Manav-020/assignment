#include<stdio.h>
int main()
{
    int b[5],c[5],min,temp;
    printf("enter array of number\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int j=0;j<5-1;j++)
    {
    min=b[j];
    for(int i=j;i<5-j;i++)
        {
         if(min>b[i+1])
         {
            min=b[i+1];
         }
        }
        temp=b[j];
        b[j]=min;
        

        
    }
    printf("\n in ascending order\n");
    for(int i=0;i<5;i++){
        printf("%d\t",b[i]);
    }
    return 0;
}