#include <stdio.h>

int main() {
    int n, i, evenCount = 0, oddCount = 0;

  
    scanf("%d", &n);

    // Handle invalid input
    if (n <= 0) {
        printf("Array size must be greater than 0.\n");
        return 1;
    }

    int arr[n];

   
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Check if even or odd
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    // Output the counts
     
    printf("%d ", evenCount);
    printf("%d ", oddCount);
   

    return 0;
}
