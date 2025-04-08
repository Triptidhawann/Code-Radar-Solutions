#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int freq[256] = {0};
    int i, max = 0;
    char mostFrequent;

   
    scanf("%s", &str); 

    
    for (i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    
    for (i = 0; i < 256; i++) {
        if (freq[i] > max) {
            max = freq[i];
            mostFrequent = i;
        }
    }

    printf("%c", mostFrequent);
    printf("%d", max);

    return 0;
}

