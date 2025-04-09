#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, i;
    
    scanf("%d", &n);

    int arr[n];

   
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Use a temporary boolean array to mark positive integers
    bool present[n + 1]; // We only care about values from 1 to n

    // Initialize all values as false
    for (i = 0; i <= n; i++) {
        present[i] = false;
    }

    // Mark the present positive numbers (1 to n)
    for (i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] <= n) {
            present[arr[i]] = true;
        }
    }

    // Find the first index that is false
    for (i = 1; i <= n; i++) {
        if (!present[i]) {
            printf("%d\n", i);
            return 0;
        }
    }

    // If all 1 to n are present, the missing number is n+1
    printf("%d\n", n + 1);
    return 0;
}
