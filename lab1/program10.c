#include<stdio.h>
void main(){
    int p,c,m,e,cm;
    printf("\n enter marks in phyiscs out of 200= ");
    scanf("%d",&p);
    printf("\n enter marks in chemistry out of 200= ");
    scanf("%d",&c);
    printf("\n enter marks in math out of 200= ");
    scanf("%d",&m);
    printf("\n enter marks in entrance exam out of 100= ");
    scanf("%d",&e);
    cm= (m+p+c)/2 + e;
    printf("\n your cut off marks is=%d",cm);
}