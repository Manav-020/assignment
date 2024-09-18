#include<stdio.h>
void main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d/%d! +",i,i);
    }
}