#include<stdio.h>
int main()
{
    int r[3][3],t[3][3];
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
        for(int j=0;j<3;j++)
        {
            t[j][i]=r[i][j];
        }
    }
    printf("\nsum of all rows is\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d \t",t[i][j]);
        }
        printf("\n");
    }


    return 0;
}