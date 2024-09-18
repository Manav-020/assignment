#include<stdio.h>
void main(){
    int a,b,c;
    printf("\n enter num1= ");
    scanf("%d",&a);
    printf("\n enter num2= ");
    scanf("%d",&b);
    printf("\n enter num3= ");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("\n max=%d",a);
    }
    else if(b>a && b>c){
        printf("\n max=%d",b);
    }
    else if(c>a && c>b){
        printf("\n max=%d",c);
    }
    else {
        printf(" numbers are equal");
    }

}