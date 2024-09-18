#include<stdio.h>
int main(){
    int n;float amt;
    printf("enter consumption of unit: ");
    scanf("%d",&n);
    if(n<=200){
        amt= n*0.5;
        printf("amt paid by cousumer= %f",amt);
    }else if(n>200 && n<=400){
        amt=100 + (n-200)*0.65;
        printf("amt paid by cousumer= %f",amt);
    }else if(n>400 && n<=600){
        amt=230 + (n-400)*0.8;
        printf("amt paid by cousumer= %f",amt);
    }else if(n>600){
        amt=425 + (n-600)*125;
        printf("amt paid by cousumer= %f",amt);
    }else{
        printf("\n invalid");
    }
    return 0;
}
