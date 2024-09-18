#include<stdio.h>
void main(){
    int a,b,c;
printf("\nenter num1= ");
scanf("%d",&a);
     printf("\nenter num2= ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("num1=%d num2=%d",a,b);
}