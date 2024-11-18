#include<stdio.h>
int check(int a);
int main()
{
    int num;
    printf("enter number ");
    scanf("%d",&num);
    check(num);
}

int check(int a)
{
    if(a%2==0){
        printf("\n number if even");
    }
    else
    {
        printf("number is odd");
    }
}