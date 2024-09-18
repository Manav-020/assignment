#include<stdio.h>
void main(){
    int x,n;
    printf("enter number= ");
    scanf("%d",&n);
    switch(n){
        case 1 : printf("\n function is= 1+x");
                break;
        case 2 : printf("\n function is= 1+x/%d",n);
                break;
        case 3 : printf("\n function is= 1+ x^%d",n);
                break;
        default : printf("\n function is= 1+%dx",n);
    }
}