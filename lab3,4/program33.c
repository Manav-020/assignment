#include<stdio.h>
int main()
{
    int n,num,max=0,min=0;
    printf("enter total number u want to enter: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("\n enter number: ");
        scanf("%d",&num);

        if(num>max)
        {
            max=num;
            if(max>=min){
                printf("\n min=%d",min);
            }
            else if(min>max){
                printf("\n min=%d",max);
            }
            printf("\n max=%d",max);
           
            
        }else if(num<max)
        {
            if(num>min)
            {
                printf("\n min=%d",min);
            }
            else if(min>num)
            {
                printf("\n min=%d",num);
            }
            printf("\n max=%d",max);
        }

    }
    return 0;
}
