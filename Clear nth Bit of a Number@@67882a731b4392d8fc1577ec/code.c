#include <stdio.h>

int main() {
    int num, n;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the bit position to clear (0 for LSB): ");
    scanf("%d", &n);

   
    int mask = ~(1 << n);

   
    int result = num & mask;

    printf("%d",result);

    return 0;
}
