#include <stdio.h>

int main() {
    int n, i, j, count;

    
    
    scanf("%d", &n);

    int arr[n], freq[n];

    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // Initialize frequency array
    }

    // Count frequencies
    for (i = 0; i < n; i++) {
        count = 1;
        if (freq[i] != -1) continue; // Already counted

        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0; // Mark as counted
            }
        }
        freq[i] = count;
    }

    // Output frequencies
    
    for (i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d \n",freq[i]);
        }
    }

    return 0;
}
