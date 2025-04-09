#include <stdio.h>

// Function to check if a number is palindromic
int isPalindrome(int num) {
    int original = num, reversed = 0;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    return original == reversed;
}

int main() {
    int n, i, count = 0;

    
    scanf("%d", &n);

    int arr[n];

    // Input array elements
 
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count palindromic numbers
    for (i = 0; i < n; i++) {
        if (isPalindrome(arr[i])) {
            count++;
        }
    }

    // Output result
    printf("%d\n", count);

    return 0;
}
