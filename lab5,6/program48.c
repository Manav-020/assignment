#include<stdio.h>
void main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            printf(" ");
        }
        for(int j=i;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
}
