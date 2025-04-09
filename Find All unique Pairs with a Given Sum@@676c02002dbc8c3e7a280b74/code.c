#include <stdio.h>

int main() {
    int n, target;
    
    scanf("%d", &n);

    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    scanf("%d", &target);

    // To keep track of unique pairs
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                int isDuplicate = 0;

                // Check if this pair has appeared before
                for (int k = 0; k < i; k++) {
                    for (int l = k + 1; l < n; l++) {
                        if ((arr[k] == arr[i] && arr[l] == arr[j]) || 
                            (arr[k] == arr[j] && arr[l] == arr[i])) {
                            isDuplicate = 1;
                            break;
                        }
                    }
                    if (isDuplicate) break;
                }

                if (!isDuplicate) {
                    printf("%d %d\n", arr[i], arr[j]);
                }
            }
        }
    }

    return 0;
}



