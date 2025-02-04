#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if (n<=1){
        printf("Not Prime\n");
    }
    else if (n == 2 || n == 3){
        printf("Not Prime\n");
    }
    else if (n % 2 == 0 || n % 3 == 0){
        printf("Prime\n");
    }
}