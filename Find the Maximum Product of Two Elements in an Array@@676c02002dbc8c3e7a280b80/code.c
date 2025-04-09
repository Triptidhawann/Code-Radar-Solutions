 #include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
   
    scanf("%d", &n);

    if (n < 2) {
        printf("Need at least two elements to find product.\n");
        return 0;
    }

    int arr[n];
   
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize the two largest and two smallest
    int max1 = INT_MIN, max2 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    for (i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }

        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2) {
            min2 = arr[i];
        }
    }

    int product1 = max1 * max2;
    int product2 = min1 * min2;

    int result = (product1 > product2) ? product1 : product2;

    printf("%d\n", result);

    return 0;
}
