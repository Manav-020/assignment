#include<stdio.h>
void main(){
    char ch;
    printf("enter charcter= ");
    scanf("%c",&ch);
    if('a'<=ch &&  ch<='z'){
        printf("\n lower case case");
    }
    else if('A'<=ch && ch<='Z'){
        printf("\n upper case");
    }
    
else {printf("symbol");}
}