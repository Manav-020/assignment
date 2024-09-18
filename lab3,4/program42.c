#include<stdio.h>
void main(){
    int n;
    printf("enter number= ");
    scanf("%d",&n);
    int i=2;
    while(i<=n){
        if(n%i==00){
            break;
    }
    i++;
}
if(i==n){
    printf("\n%d is a prime number",n);
}else{
    printf("\n%d is a composite number",n);
}
}