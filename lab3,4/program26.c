#include<stdio.h>
void main(){
    int n;
    printf("enter number= ");
    scanf("%d",&n);
    int even=0;
    int odd=0;
    int i=1;
    while(i<=n){
        if(i%2==0){
            even+=i;
        }
        else{
            odd+=i;
        }
        i++;
    }
    printf("\n sum of even number is=%d",even);
    printf("\n sum of odd number is=%d",odd);

}