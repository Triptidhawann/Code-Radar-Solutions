#include <stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if (a>='A'|| a<='Z'){
        printf("Uppercase\n");
    }
    else if (a >= 'a'||  a <= 'z'){
        printf("Lowercase");
    }
    

}