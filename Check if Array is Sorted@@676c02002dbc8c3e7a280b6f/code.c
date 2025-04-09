#include <stdio.h>

int main() {
    int n, i, isSorted = 1;

    // Input array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if array is sorted in non-decreasing order
    for (i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isSorted = 0;
            break;
        }
    }

    // Output result
    if (isSorted) {
        printf("The array is sorted in non-decreasing order.\n");
    } else {
        printf("The array is NOT sorted in non-decreasing order.\n");
    }

    return 0;
}
