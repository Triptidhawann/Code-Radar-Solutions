#include <stdio.h>

int main() {
    int n, target;

   
    scanf("%d", &n);

    int arr[n];


    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

 
    scanf("%d", &target);

    printf("%d:\n", target);
    int found = 0;

    // Check all pairs
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                // Check if this pair was already printed
                int duplicate = 0;
                for (int k = 0; k < i; k++) {
                    if ((arr[k] == arr[i] && arr[k + 1] == arr[j]) || (arr[k] == arr[j] && arr[k + 1] == arr[i])) {
                        duplicate = 1;
                        break;
                    }
                }
                if (!duplicate) {
                    printf("%d %d\n", arr[i], arr[j]);
                    found = 1;
                }
            }
        }
    }

    if (!found) {
        printf("No pairs found.\n");
    }

    return 0;
}
