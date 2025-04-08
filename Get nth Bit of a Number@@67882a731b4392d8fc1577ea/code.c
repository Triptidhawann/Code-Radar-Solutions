#include <stdio.h>

int main() {
    int num, n;

    
    scanf("%d", &num);

    
    scanf("%d", &n);

   
    int mask = 1 << n;

    if (num & mask)
        printf("The %dth bit of %d is SET (1).\n", n, num);
    else
        printf("The %dth bit of %d is NOT SET (0).\n", n, num);

    return 0;
}
