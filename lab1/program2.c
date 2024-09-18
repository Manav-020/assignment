#include<stdio.h>
void main()
{
    int sub1,sub2,sub3,sub4,sub5, sum,percentage;
    printf("enter marks of subject");
    scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
    printf("\n sub1=%d",sub1);
    printf("\n sub2=%d",sub2);
    printf("\n sub3=%d",sub3);
    printf("\n sub4=%d",sub4);
    printf("\n sub5=%d",sub5);
    sum= sub1+sub2+sub3+sub4+sub5;
    percentage= sum/5;
    printf("\n sum of marks=%d",sum);
    printf("\n percentage=%d",percentage);
}