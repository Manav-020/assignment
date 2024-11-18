#include<stdio.h>
int prime(int a);
void main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    prime(n);
}

int prime(int a)
{
    int b,c;
    for(int i=2;i<=a;i++)
    {
        b=a%i;
        if(b==0)
        {
            c=i;
            break;
        }
        else
        {
            continue;
        }
    }
    if (c==a)
    {
        printf("\nnumber is prime");
        return 1;
    }
    else
    {
        printf("\n number is not a prime");
        return 0;
    }
}