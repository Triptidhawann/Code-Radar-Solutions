#include <stdio.h>

int main() {
    int n, k, count = 0;


    scanf("%d", &n);

    int arr[n];

    // Input: array elements
  
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input: value of K

    scanf("%d", &k);

    // Count elements equal to K
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            count++;
        }
    }

    // Output the result
    printf("%d\n", k, count);

    return 0;
}
