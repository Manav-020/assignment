#include<stdio.h>
int main()
{
    char cr[100],*d;
    d=&cr[0];
    int count=0;
    printf("enter string\n");
    fgets(cr,100,stdin);
    for(int i=0;*d!='\0';i++)
    {
        switch(*d)
        {
            case 'a':
            case 'I':
            case 'U':
            case 'O':
            case 'E':
            case 'A':
            case 'u':
            case 'o':
            case 'i':
            case 'e':count++;
        }
        d++;
    }
    printf("number of vowels in the string is:%d",count);
}