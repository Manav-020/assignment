#include<stdio.h>
int main(){
    int n,sum;
    fflush(stdin);
    printf("enter number: ");
    scanf("%d",n);
    while(n!=0){
        sum+=n%10;
        n/=10;        
    }
    printf("\nsum of digit is=%d",sum);
    return 0;
}