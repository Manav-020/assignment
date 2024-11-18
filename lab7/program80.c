#include<stdio.h>
int series(int n);
void main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    series(n);  
}

int series(int n)
{
    int a=0,b=1,c;
    printf("%d\t",a);
    printf("%d\t",b);
    for(int i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
}