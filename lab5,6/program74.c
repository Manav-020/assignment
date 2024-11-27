#include <stdio.h>

int main() {
   int A[5],B[5],temp,C[10];
    printf("enter arrayA: \n");
    for(int i=0;i<5;i++){
        scanf("%d",&A[i]);
    }
    for(int i=0;i<5;i++){
        printf("\t%d",A[i]);
    }
    printf("\nenter arrayB: \n");
    for(int i=0;i<5;i++){
        scanf("%d",&B[i]);
    }

    for(int i=0;i<5;i++){
        printf("\t%d",B[i]);
    }
    
    for(int i=0,j=5;i<5,j<10;i++,j++)
    {
        C[i]=A[i];
        C[j]=B[i];
    }



    for(int i=0;i<10;i++)
    {  
        for(int j=0;j<10-i;j++){
        temp=C[j];
        if(temp>C[j+1]){
            C[j]=C[j+1];
            C[j+1]=temp;
            }
        }
    }
    
    printf("\ncombination of sorted array: \n");
    for(int i=0;i<10;i++){
        printf("%d\t",C[i]);
    }

    

    return 0;
}