#include<stdio.h>
void main(){
    int n,sum=0,num;
    printf("enter number: ");
    scanf("%d",&num);
    n=num;
    while(n!=0){
        int a=n%10;
        sum+=a;\
        n/=10;
        if(n==0){
            break;
        }
        sum*=10;
        
        }
    if(sum==num){
        printf("\n number is palindrome ");
    }else{
        printf("\n not a plaindrome ");
    }
}