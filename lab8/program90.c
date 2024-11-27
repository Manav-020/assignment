#include<stdio.h>
int main()
{
    char str[100],*a;
    a=&str[0];
    int l=0,m=0;
    printf("enter string\n");
    fgets(str,100,stdin);
    for(int i=0;*a!='\0';i++)
    {
        l++;
        if(*a!=' ')
        {
            m++;
        }
        a++;
    }
    printf("length of string = %d\n",l);
    printf("length of string without space is= %d\n",m);
    return 0;
}