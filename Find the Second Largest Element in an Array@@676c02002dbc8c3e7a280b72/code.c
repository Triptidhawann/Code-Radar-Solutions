#include <stdio.h>

int main() {
    int n, i;

    
    scanf("%d", &n);

    if (n < 2) {
        printf("-1\n"); // Need at least two elements
        return 0;
    }

    int arr[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int first = arr[0];
    int second = -1;
    
    // Find the largest and second largest
    for (i = 1; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] < first && (second == -1 || arr[i] > second)) {
            second = arr[i];
        }
    }

    // Check if second largest was found
    if (second == -1) {
        printf("-1\n");
    } else {
        printf("%d\n", second);
    }

    return 0;
}

