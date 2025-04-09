#include <stdio.h>

int main() {
    int n, i, target, found = -1;

 
    scanf("%d", &n);

    int arr[n];

 
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    scanf("%d", &target);

    // Search for the first occurrence
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = i; // Store index
            break;     // Stop at first match
        }
    }

    // Output result
    if (found != -1) {
        printf("%d\n", found);
    } else {
        printf("-1\n");
    }

    return 0;
}
