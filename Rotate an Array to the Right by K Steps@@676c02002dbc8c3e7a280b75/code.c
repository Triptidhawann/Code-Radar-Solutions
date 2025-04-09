#include <stdio.h>

int main() {
    int n, k, i;

    
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    scanf("%d", &k);

    // Normalize K (in case K > n)
    k = k % n;

    // Temporary array to store rotated result
    int rotated[n];

    // Copy last k elements to beginning
    for (i = 0; i < k; i++) {
        rotated[i] = arr[n - k + i];
    }

    // Copy first (n-k) elements after that
    for (i = k; i < n; i++) {
        rotated[i] = arr[i - k];
    }

    // Output rotated array
  
    for (i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }
    printf("\n");

    return 0;
}
