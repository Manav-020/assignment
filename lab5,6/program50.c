#include<stdio.h>
void main(){
    char c='A';
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("%c",c);
        }
        printf("\n");
        c++;
    }

}