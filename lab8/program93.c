#include<stdio.h>
int main()
{
    char str[100],*c;
    c=&str[0];
    int count=0;
    printf("enter string\n");
    fgets(str,100,stdin);
    for(int i=0;*c!='\0';i++)
    {
        if(*c==' ')
        {
            count++;
        }
        c++;
    }
    printf("number of words in the string is:%d",count+1);
}