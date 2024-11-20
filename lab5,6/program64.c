#include<stdio.h>
int main()
{
    int r[3][3],sum[3];
    sum[1]=0;
    printf("enter elements of matrix\n");
    for(int i=0;i<3;i++)
    {
        for(int j =0;j<3;j++)
        {
            scanf("%d",&r[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<3;i++)
    {
        for(int j =0;j<3;j++)
        {
           printf("%d\t",r[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<3;i++)
    {
        for(int j =0;j<3;j++)
        {
           sum[i]+=r[i][j];
        }
    }
    printf("\nsum of all rows is\n");
    for(int i=0;i<3;i++)
    {
        printf("%d \n",sum[i]);
    }
    return 0;
}
