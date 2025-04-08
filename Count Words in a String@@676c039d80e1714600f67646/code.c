#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    int i, count = 0;
    int inWord = 0;

   
    fgets(str, sizeof(str), stdin);  

    for (i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            count++;
        }
    }

    printf("%d", count);
    return 0;
}
