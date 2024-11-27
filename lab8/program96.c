#include <stdio.h>
#include <string.h>
#include<stdlib.h>


void sortStrings(char *arr[], int n) {
    char *temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);

    char *arr[n];
    char buffer[100];

    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", buffer);
        arr[i] = strdup(buffer);
    }

    sortStrings(arr, n);

    printf("\nStrings in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
        free(arr[i]);  // Freeing the dynamically allocated memory
    }

    return 0;
}
