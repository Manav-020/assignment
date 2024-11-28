#include<stdio.h>
int main()
{
    int n,m,k,a,b,sum=0;
    printf("enter number of jars\n");
    scanf("%d",&n);
    printf("enter of operations\n");
    scanf("%d",&m);
    printf("enter number of candies to be added in each jars\n");
    scanf("%d",&k);
    printf("enter range of jars you want to fill from a-b\n");
    int j[n];
    for(int i=0;i<n;i++)
    {
        j[i]=0;
    }
    for(int i=0;i<m;i++)
    {
        printf("for jar%d\n ",i+1);
        printf("enter a and b\n");
        scanf("%d%d",&a,&b);
        for(a-1;a-1<=b-1;a++)
        {
            j[a-1]+=k;
        }
    }
    for(int i=0;i<n;i++)
    {
        sum+=j[i];
    }
    printf("everage candies of candeies present in jars=%d",sum/n);
}