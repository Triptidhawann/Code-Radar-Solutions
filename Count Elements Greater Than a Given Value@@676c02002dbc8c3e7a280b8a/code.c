#include <stdio.h>

int main() {
    int n, k, count = 0;


    scanf("%d", &n);

    int arr[n];

 
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    scanf("%d", &k);

    // Count elements greater than K
    for (int i = 0; i < n; i++) {
        if (arr[i] > k) {
            count++;
        }
    }

    // Output the result
    printf("%d\n", k, count);

    return 0;
}

