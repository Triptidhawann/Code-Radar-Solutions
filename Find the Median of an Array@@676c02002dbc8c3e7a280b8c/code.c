#include <stdio.h>

// Function to sort the array using Bubble Sort
void sortArray(int arr[], int n) {
    int temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;


    scanf("%d", &n);

    int arr[n];


    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array
    sortArray(arr, n);

    // Find and print median
    float median;
    if (n % 2 == 1) {
        // Odd number of elements
        median = arr[n / 2];
    } else {
        // Even number of elements
        median = (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    }

    printf("%d\n", median);

    return 0;
}
