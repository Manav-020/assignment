#include<stdio.h>
int main()
{
    int b[5],c[5],max;
    printf("enter array of number\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int j=0;j<5;j++)
    {
    max=b[0];
    for(int i=0;i<5-j;i++)
        {
         if(max<b[i] && c[j]==max)
        {
            max=b[i];
        }
        }
    
    }
    printf("\n in ascending order\n");
    for(int i=0;i<5;i++){
        printf("%d\t",c[i]);
    }
    return 0;
}