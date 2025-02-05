#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if ( ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'|| ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ){
        printf("Vowels\n");
    }
    else if (ch >= '0' && ch <= '9'){
        printf("Digit\n");
    }
    else if (ch >= A &&  ch <= Z || ch >= a && ch <= z ){
        printf("Consonants\n")
    }
    else {
        printf("Special Character\n");
    }
}