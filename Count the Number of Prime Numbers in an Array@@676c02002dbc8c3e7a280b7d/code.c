#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1)
        return false;

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return false;
    }

    return true;
}

int main() {
    int n, i, count = 0;

    // Input array size
   
    scanf("%d", &n);

    int arr[n];

    // Input array elements
   
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count primes
    for (i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }

    // Output result
    printf("%d\n", count);

    return 0;
}
