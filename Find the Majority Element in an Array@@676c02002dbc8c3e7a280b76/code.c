#include <stdio.h>

int main() {
    int n, i;

   
    scanf("%d", &n);

    int arr[n];

   
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Boyer-Moore Voting Algorithm to find a candidate
    int count = 0, candidate = -1;

    for (i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Check if candidate is actually majority
    count = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }

    if (count > n / 2) {
        printf("%d\n", candidate);
    } else {
        printf("-1\n"); // No majority element
    }

    return 0;
}
