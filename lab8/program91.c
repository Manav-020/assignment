#include<stdio.h>
int main()
{
    int n,*a;
    a=&n;
    printf("enter number\n");
    scanf("%d",a);
    printf("square of number is: %d\n",(*a)*(*a));
    printf("cube of number is: %d\n",(*a)*(*a)*(*a));
    return 0;
}