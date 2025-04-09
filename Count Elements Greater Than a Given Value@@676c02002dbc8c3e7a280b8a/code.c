#include <stdio.h>

int main() {
    int n, i, k, count = 0;

    
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input value of K
    
    scanf("%d", &k);

    // Count elements greater than K
    for (i = 0; i < n; i++) {
        if (arr[i] > k) {
            count++;
        }
    }

    // Output result
    printf("%d\n", k, count);

    return 0;
}
