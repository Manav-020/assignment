#include<stdio.h>
void main(){
    int num;
    printf("enter number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i+=2){
         printf("%d\n",i);
    } 
}