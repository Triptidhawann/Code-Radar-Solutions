#include <stdio.h>

int main() {
    int n;
  
    scanf("%d", &n);

    if(n < 2) {
        printf("-1");  // Not enough elements to form a pair
        return 0;
    }

    int arr[n];
   
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxProduct = arr[0] * arr[1];

    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            int product = arr[i] * arr[j];
            if(product > maxProduct) {
                maxProduct = product;
            }
        }
    }

    printf("%d\n", maxProduct);
    return 0;
}


