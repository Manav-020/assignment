// #include<stdio.h>
// int main()
// {   
//     int arr[10],f;
//     printf("enter array of number\n ");
//     for(int i=0;i<10;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("enter element you want to search\n ");
//     scanf("%d",&f);
//     for(int i=0;i<10;i++)
//     {
//         if(f==arr[i])
//         {
//             printf("\n %d found at index %d ",f,i);
//             break;
//         }
//         else{
//             printf("\nelement not found");
//         }
//     }
//     return 0;
// }

#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Return the index if the key is found
        }
    }
    return -1; // Return -1 if the key is not found
}

int main() {
    int arr[] = {10, 50, 30, 70, 80, 60, 20, 90, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;

    int result = linearSearch(arr, n, key);
    if (result == -1) {
        printf("Key not found\n");
    } else {
        printf("Key found at index: %d\n", result);
    }

    return 0;
}
