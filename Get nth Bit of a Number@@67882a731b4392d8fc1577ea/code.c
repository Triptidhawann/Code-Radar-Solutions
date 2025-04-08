#include <stdio.h>

int main() {
    int num, n;

    
    scanf("%d", &num);

    
    scanf("%d", &n);

   
    int mask = 1 << n;

    if (num & mask)
        printf("%d", num);
    else
        printf("%d" ,num);

    return 0;
}
