#include <stdio.h>

int main() {
    int num, n;

   
    scanf("%d", &num);

    
    scanf("%d", &n);

    
    int mask = 1 << n;

   
    int result = num ^ mask;

    printf("%d", result);

    return 0;
}
