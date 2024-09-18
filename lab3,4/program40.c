#include<stdio.h>
void main(){
int n=0,sum;
while(n>=0){
    printf("\nenter number:");
    scanf("%d",&n);
    if(n<0){
        break;
    }
    while(n!=0){
        sum+=n%10;
        n/=10;        
    }
    printf("\n sum of entered numbers= %d",sum);
}printf("\nend");
}