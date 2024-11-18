#include<stdio.h>
int check(int b);
void main()
{
    int num;
    printf("enter number");
    scanf("%d",&num);
    check(num);
       
}

int check(int b)
{
    int q=0,c;
    c=b;
    while(c!=0)
    {
        q= (q + c%10)*10;
        c= c/10;
    }
    if(q/10==b)
    {
        printf("\n number is palindrome");
    }
    else
    {
        printf("\n number is not a plaindrome");
    }    
}