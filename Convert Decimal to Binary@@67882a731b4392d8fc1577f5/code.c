#include <stdio.h>

int main() {
    unsigned int num;
    int i;

   
    scanf("%u", &num);

  
    for (i = 31; i >= 0; i--) {
       
        if ((num >> i) & 1)
            printf("1");
        else
            printf("0");
    }

    printf("\n");

    return 0;
}
