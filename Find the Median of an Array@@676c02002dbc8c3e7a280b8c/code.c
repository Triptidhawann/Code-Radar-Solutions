#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
   
    scanf("%d", &n);

    int arr[n];
   
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array
    qsort(arr, n, sizeof(int), compare);

    // Calculate and print median
    if (n % 2 == 1) {
        // Odd number of elements
        printf("%d\n", arr[n / 2]);
    } else {
        // Even number of elements
        float median = (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
        printf("%d\n", median);
    }

    return 0;
}

