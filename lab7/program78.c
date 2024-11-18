#include<stdio.h>
int check(int b);
int main()
{
    int n;
    printf("enter nummber");
    scanf("%d",&n);
    check(n);
    return 0;
}

int check(int b)
{
    int q=0,c,r=0;
    c=b;
    while(c!=0)
    {
        q= c%10;
        r += q*q*q;
        c=c/10;
    }
    if(r==b)
    {
        printf("\n number is armstrong number");
    }
    else
    {
        printf("\n number is not an armstrong number");
    }
}