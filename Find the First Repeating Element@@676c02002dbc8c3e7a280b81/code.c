#include <stdio.h>

int main() {
    int n, i, j, found = 0;
    scanf("%d", &n);

    int arr[n];


    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the first repeating element
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d\n", arr[i]);
                found = 1;
                break;
            }
        }
        if (found)
            break;
    }

    if (!found) {
        printf("-1\n");
    }

    return 0;
}
