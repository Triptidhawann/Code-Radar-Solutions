#include <stdio.h>
#include <stdbool.h>

// Helper function to check if a number exists in array
bool exists(int arr[], int n, int num) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == num)
            return true;
    }
    return false;
}

int main() {
    int n, i;

  
    scanf("%d", &n);

    int arr[n];

    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int longest = 0;

    for (i = 0; i < n; i++) {
        int current = arr[i];
        int length = 1;

        // Only start counting if it's the beginning of a sequence
        if (!exists(arr, n, current - 1)) {
            while (exists(arr, n, current + 1)) {
                current++;
                length++;
            }
            if (length > longest) {
                longest = length;
            }
        }
    }

    printf("%d\n", longest);

    return 0;
}
