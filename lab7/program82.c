#include<stdio.h>
int fact(int f);
void main()
{
    int n,r,ans;
    printf("enter n and r");
    scanf("%d%d",&n,&r);
     ans= fact(n)/(fact(r)*fact(n-r));
    printf("\n answer is= %d",ans);
}

int fact(int f)
{
    int product =1;
    for(int i=1;i<=f;i++)
    {   
        product*=i;
    }
    return product;
}