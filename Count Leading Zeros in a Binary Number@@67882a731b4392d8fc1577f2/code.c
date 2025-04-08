#include <stdio.h>

int main() {
    unsigned int num;
    int count = 0;

    scanf("%u", &num);  

    if (num == 0) {
       
        return 0;
    }

    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1)
            break;
        count++;
    }

    printf("%d", count);

    return 0;
}
