#include<stdio.h>
int main()
{
    int m[3][3],n[3][3],s[3][3];
    printf("enter elements of matrix1\n");
    for(int i=0;i<3;i++)
    {
        for(int j =0;j<3;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<3;i++)
    {
        for(int j =0;j<3;j++)
        {
           printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
    printf("enter elements of matrix2\n");
    for(int i=0;i<3;i++)
    {
        for(int j =0;j<3;j++)
        {
            scanf("%d",&n[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<3;i++)
    {
        for(int j =0;j<3;j++)
        {
           printf("%d\t",n[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<3;i++)
    {
        for(int j =0;j<3;j++)
        {
            s[i][j]=m[i][j]-n[i][j];
        }
    }
    printf("\n subtraction of matrix 1&2 is\n");
    for(int i=0;i<3;i++)
    {
        for(int j =0;j<3;j++)
        {
           printf("%d\t",s[i][j]);
        }
        printf("\n");
    }

    
}