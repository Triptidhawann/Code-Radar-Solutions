#include <stdio.h>

int main() {
    int n, i, j = 0;

    
    scanf("%d", &n);

    int arr[n];

  
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Move non-zero elements to the front
    for (i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[j++] = arr[i]; // Keep order
        }
    }

    // Fill the rest with zeros
    while (j < n) {
        arr[j++] = 0;
    }


    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
