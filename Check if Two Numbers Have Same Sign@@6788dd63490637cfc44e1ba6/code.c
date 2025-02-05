#include <stdio.h>
int main(){
    int a;
    int b;
    scanf("%d %d ", &a ,&b);
    if (a > 0 && b > 0 || a < 0 && b < 0){
        printf("Same Sign\n");
    }
    else if ( a < 0 && b > 0  || a > 0 && b < 0){
        printf("Different Sign\n");
    }
   
}
