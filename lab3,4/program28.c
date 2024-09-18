#include<stdio.h>
int main(){
    int n,x,sum=0,z;
    printf("enter number=");
    scanf("%d",&n);
    z=n;
    while(z!=0){
        x= z%10;
        sum+=x*x*x;
        z=z/10;
    }
    printf("\n sum=%d",sum);
    if(sum==n){
        printf("\n %d is an armstrong number",n);
    }else{
        printf("\n %d is not an armstrong number",n);
    }
    return 0;
}