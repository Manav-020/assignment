#include<stdio.h>
void main(){
    int n,sum,sum2;
    printf("enter number: ");
    scanf("%d",&n);
    while(n!=0){
            sum+=(n%10);
            n/=10;
    }
    if(sum>=10){
        int z=sum;
        while(z!=0){
            sum2+=(z%10);
            z/=10;
    }
    printf("\n sum till single digit is=%d",sum2);
}else{
    printf("\n sum till single digit is=%d",sum2);
}
}