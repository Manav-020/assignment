#include<stdio.h>
int main()
{
    int n,arr[15],a,b,k=0;
    printf("enter number\n");
    scanf("%d",&n);
    b=n;
    while(b!=0)
    {
        a=b%10;
        if(n%a==0)
        {
            arr[k]=a;
            k++;
        }
        b=b/10;
    }
    for(int i=0;i<k;i++)
    {
        printf("%d\n",arr[i]);
    }
}