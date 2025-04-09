#include <stdio.h>

int main() {
    int n;
   
    scanf("%d", &n);

    int arr[n], leaders[n], count = 0;
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxRight = arr[n - 1];
    leaders[count++] = maxRight;

    for(int i = n - 2; i >= 0; i--) {
        if(arr[i] >= maxRight) {
            maxRight = arr[i];
            leaders[count++] = maxRight;
        }
    }

    // Print leaders in reverse to get left-to-right order
   
    for(int i = count - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }

    printf("\n");
    return 0;
}

