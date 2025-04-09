#include <stdio.h>

int main() {
    int n, i;

   
    scanf("%d", &n);

    // Handle invalid input
    if (n <= 0) {
        printf("Array size must be greater than 0.\n");
        return 1;
    }

    int arr[n];

   
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    // Loop to find max and min
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Output results
    printf("%d\n", max);
    printf("%d\n", min);

    return 0;
}
