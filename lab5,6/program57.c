#include <stdio.h>

int main() {
   int arr[10],temp;
    printf("enter array: \n");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++){
        printf("\t%d",arr[i]);
    }
    for(int i=0;i<10;i++)
    {  
        for(int j=0;j<10-i;j++){
        temp=arr[j];
        if(temp>arr[j+1]){
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
    }
    printf("\n");
    for(int i=0;i<10;i++){
        printf("\t%d",arr[i]);
    }
    printf("\n max= %d\n",arr[9]);
    printf("2nd max= %d\n",arr[8]);
    

    return 0;
}