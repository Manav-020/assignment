#include<stdio.h>
int main()
{
    int arr[3][3],max,min;
    printf("enter elements of matrix\n");
    for(int i=0;i<3;i++)
    {
        for(int j =0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    max=arr[0][0],min=arr[0][0];
    for(int i=0;i<3;i++)
    {
        for(int j =0;j<=2;j++)
        {
            if(max<arr[i][j]){
                max=arr[i][j];
            }
        }
        for(int j =0;j<=2;j++)
        {
            if(min>arr[i][j]){
                min=arr[i][j];
            }
        }
    }
    printf("maximum element=%d\t minimum elemnt=%d",max,min);
}