#include <stdio.h>

int main() {
    int n, i;
    int maxEven = -1; // Initialize with -1 for the case where no even numbers are found

   
    scanf("%d", &n);

    int arr[n];

   
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the largest even number
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) { // Check if even
            if (arr[i] > maxEven) {
                maxEven = arr[i];
            }
        }
    }

    // Output the result
    if (maxEven == -1) {
        printf("-2\n");
    } else {
        printf("%d\n", maxEven);
    }

    return 0;
}
