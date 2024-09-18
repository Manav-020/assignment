#include<stdio.h>
#include<math.h>
int power(){
    int a,b;
    printf("enter num1= ");
    scanf("%d",&a);
     printf("\n enter num2= ");
    scanf("%d",&b);
    int power=pow(a,b);
    printf("\n power=%d",power);
    return 0;

}
