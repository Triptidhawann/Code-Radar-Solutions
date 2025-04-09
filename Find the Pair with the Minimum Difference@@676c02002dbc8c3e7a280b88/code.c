#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    
    scanf("%d", &n);

    if (n < 2) {
        printf("-1\n");
        return 0;
    }

    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array
    qsort(arr, n, sizeof(int), compare);

    int minDiff = INT_MAX;
    int x = 0, y = 0;

    for (int i = 1; i < n; i++) {
        int diff = abs(arr[i] - arr[i - 1]);
        if (diff < minDiff) {
            minDiff = diff;
            x = arr[i - 1];
            y = arr[i];
        }
    }

    printf("%d %d\n", x, y);

    return 0;
}
