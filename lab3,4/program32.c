#include<stdio.h>
int main(){
    int n,num,max=0,max2=0;
    printf("enter total number u want to enter: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("\n enter number: ");
        scanf("%d",&num);
        if(num>max)
        {
            max2=max;
            max=num;
            printf("\n max=%d",max);
            printf("\n 2nd max=%d",max2);
        }
        else if(max2<num && num<max)
        {
            max2=num;
            printf("\n max=%d",max);
            printf("\n 2nd max=%d",max2);
           
        }
        else if(num<max2){
            printf("\n max=%d",max);
            printf("\n 2nd max=%d",max2);
        }
    
    }  
    return 0;

}
