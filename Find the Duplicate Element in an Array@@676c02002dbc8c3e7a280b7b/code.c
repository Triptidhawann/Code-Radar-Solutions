#include <stdio.h>

int main() {
    int n;
    
    scanf("%d", &n);

    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check for duplicate
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d\n", arr[i]);
                return 0;
            }
        }
    }

    printf("No duplicate found.\n");
    return 0;
}
