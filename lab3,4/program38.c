#include<stdio.h>
int main(){
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    printf("\nsquares upto n is");
    for(int i=1;i<=n;i++){
        printf("\n%d",i*i);
    }
    return 0;
}