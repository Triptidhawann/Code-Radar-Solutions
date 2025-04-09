#include <stdio.h>

int main() {
    int n, i;

    // Input array size
  
    scanf("%d", &n);

    int arr[n];

  
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

  
    if (n == 0) {
        printf("-1\n"); // No elements
        return 0;
    }

    if (n == 1 || arr[0] > arr[1]) {
       
        return 0;
    }

    // Check from second element to second last
    for (i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            printf("%d\n", arr[i]);
            return 0;
        }
    }

    // Check last element
    if (arr[n - 1] > arr[n - 2]) {
        printf("%d\n", arr[n - 1]);
        return 0;
    }

    // No peak found
    printf("-1\n");
    return 0;
}
