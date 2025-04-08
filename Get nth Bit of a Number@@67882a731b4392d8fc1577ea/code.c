#include <stdio.h>

int main() {
    int num, n;

    
    scanf("%d", &num);

    
    scanf("%d", &n);

   
    int mask = 1 << n;

    if (num & mask)
        printf("1");
    else
        printf("0");

    return 0;
}
