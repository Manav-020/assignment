#include<stdio.h>
void main(){
    int n,product;
    printf("enter number= ");
    scanf("%d",&n);
    printf("\n table of %d is:",n);
    product=1;
    for(int i=1;i<=10;i++){
    product=n*i;
    printf("\n %d",product);
}
}