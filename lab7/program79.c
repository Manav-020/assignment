#include<stdio.h>
int swap(int x,int y)
{
    int x,y;
    printf("enter x");
    scanf("%d",&x);
    printf("enter y");
    scanf("%d",&y);
    swap(x,y);
}

int swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("x=%d\ty=%d",x,y);
}