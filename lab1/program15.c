#include<stdio.h>
int main(){
    int marks;
    printf("enter marks out of 100= ");
    scanf("%d",&marks);
    if(marks>=90){
        printf("\n divsion is A");
    }else if(marks>=80 && marks<90){
        printf("\n divsion is B");
    }
    else if(marks>=70 && marks<80){
        printf("\n divsion is C");       
    }else if(marks>=60 && marks<70){
        printf("\n divsion is D");
                
    }else if(marks<60){
        printf("\n divsion is E");
    }else{
        printf("\n invalid");
    }
    return 0;
}