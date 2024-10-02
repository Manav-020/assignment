#include<stdio.h>
void main(){
    // char c='A';
    for(char c='A';c<='E';c++){
        for(char b='A';b<=c;b++){
            printf("%c",b);
        }
        printf("\n");
    }
}