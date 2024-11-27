#include<stdio.h>
int main()
{
    int *aptr,b,ar[b],max;
    aptr=&ar[0];
    printf("how many number you want to enter\n");
    scanf("%d",&b);
    printf("enter array of numbers\n");
    for(int i=0;i<b;i++)
    {
        scanf("%d",aptr);
        aptr++;
    }
    max=*aptr;
    for(int i=0;i<b;i++)
    {
        if(max<*(aptr+i))
        {
            max=*(aptr+i);
        }
    }
    printf("max number in array is: %d",max);
}