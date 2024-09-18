#include<stdio.h>
void main()
{
    int sal,tax1,tax2,gross;
    printf("entre your salary in hand");
    scanf("%d",&sal);
    tax1 = sal*0.18;
    tax2 = sal*0.15;
    gross= sal +tax1+tax2;
    printf("your gross salaray=%d",gross);
    
}