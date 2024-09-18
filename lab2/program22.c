#include<stdio.h>
void main(){
    int b;
printf("enter number= ");
scanf("%d",&b);
 int a=1;
    for(int i=1;i<=b;i++){
        a=i*a;
        }
    printf("\n factorial of number is= %d",a);
}


