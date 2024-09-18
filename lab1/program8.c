#include<stdio.h>
void main()
{
    int days,hours,minutes;
    days= 31558150%86400;
    hours= 31558150%3600;
    minutes= 31558150%60;
    printf("earth takes=%d days \n",days);
    printf("earth takes =%d hours\n",hours);
    printf("earth takes =%d minutes\n",minutes);
}