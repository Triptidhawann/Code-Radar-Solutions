#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    int arr[n];

   
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxFromRight = arr[n - 1];
    arr[n - 1] = -1;  // Last element is always -1

    // Traverse array from right to left
    for (i = n - 2; i >= 0; i--) {
        int temp = arr[i];
        arr[i] = maxFromRight;

        if (temp > maxFromRight) {
            maxFromRight = temp;
        }
    }

   
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
