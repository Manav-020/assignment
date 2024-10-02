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
    
    for(int i=0;i<5;i++)
    {  
        for(int j=0;j<10-i;j++){
        temp=A[j];
        if(temp>A[j+1]){
            A[j]=A[j+1];
            A[j+1]=temp;
            }
        }
    }
    for(int i=0;i<5;i++)
    {  
        for(int j=0;j<10-i;j++){
        temp=B[j];
        if(temp>B[j+1]){
            B[j]=B[j+1];
            B[j+1]=temp;
            }
        }
    }
    // printf("\narray A in asecending order is\n");
    // for(int i=0;i<5;i++){
    //     printf("\t%d",A[i]);
    // }
    // printf("\narray B in asecending order is\n");
    // for(int i=0;i<5;i++){
    //     printf("\t%d",A[i]);
    // }
    for(int i=0,j=5;j<10,i<5;i++,j++)
    {
        if(A[0]>B[4])
        {
            C[i]=B[i];
            C[j]=A[i];
        }
        else
        {
             C[i]=B[j];
            C[j]=A[i];
        }
    }
    printf("\narray C in asecending order is\n");
    for(int i=0;i<10;i++){
        printf("\t%d",C[i]);
    }

    return 0;
}