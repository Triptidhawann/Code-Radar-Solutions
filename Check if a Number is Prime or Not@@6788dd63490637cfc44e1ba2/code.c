#include <stdio.h>
int main(){
    int a;
    scanf("%d",&n);
    if (n<=1){
        printf("Not Prime\n");
    }
    else if (n == 2 || n == 3){
        printf(" Prime\n");
    }
    else if (n % 2 == 0 || n % 3 == 0){
        printf(" Not Prime\n");
    }
    else {
        printf("Prime");
    }
    
}