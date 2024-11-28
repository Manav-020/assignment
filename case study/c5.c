#include<stdio.h>
int main()
{
    int N[100000],f[100],d=0,a=0,b=1,flag=0;
    printf("enter number and if want to end entering number press -1\n");
    for(int i=0;i<100000 ;i++)
    {
        scanf("%d",&N[i]);
        if(N[i]==-1)
        {
            break;
        }
        d++;
    }
    printf("%d\t",a);
    printf("%d\t",b);
    for(int i=0;i<20;i++)
    {
        f[i]=a+b;
        printf("%d\t",f[i]);
        a=b;
        b=f[i];
    }
    for(int i=0;i<d;i++)
    {
        for(int j=0;j<20;j++)
        {
            if(N[i]==f[j])
            {
                printf("\nitsfibo\n");
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("\nnotfibo\n");
        }
        flag=0;
    
    }

}