#include <stdio.h>

int main() {
    int n;
  
    scanf("%d", &n);

    int arr[n];
   
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    int maxRight = arr[n - 1];  // Last element is always a leader
    printf("%d ", maxRight);

    for(int i = n - 2; i >= 0; i--) {
        if(arr[i] >= maxRight) {
            maxRight = arr[i];
            printf("%d ", maxRight);
        }
    }

    printf("\n");
    return 0;
}
