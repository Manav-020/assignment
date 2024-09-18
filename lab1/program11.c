#include<stdio.h>
void main(){
    int seconds,h,m,s;
    printf("enter number of seconds= ");
    scanf("%d",&seconds);
    h=seconds/3600;
    if(h==0){
        m=seconds/60;
        if(m==0){
            s=seconds;
        }else{
            s=seconds%60;
        }
    } 
    else if(h!=00){
        m=(seconds%3600)/60;
         if(m==0){
            s=seconds;
        }else{
            s=seconds%60;
        }
        
    }
    printf("time= %d hours:%d minutes:%d seconds",h,m,s);

}