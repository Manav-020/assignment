#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter num1= ");
    scanf("%d",&a);
    printf("\n enter num2= ");
    scanf("%d",&b);
    printf("\n enter 1-4 for add,divide,multiply,sub respectievely= ");
    scanf("%d",&c);
    switch(c){
        case 1: printf("\n sum =%d",a+b);
                break;
        case 2: printf("\n division=%f",a/b);
                break;
        case 3: printf("\n multiply=%d",a*b);
                break;
        case 4: printf("\n subtraction=%d",a-b);
                break;
        default: printf("\n invalid");
    }


}
