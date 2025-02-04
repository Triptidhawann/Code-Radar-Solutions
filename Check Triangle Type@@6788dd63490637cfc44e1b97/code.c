#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    scanf("%d %d %d " ,&a ,&b,&c);
    if (a == b == c){
        printf("Equilateral");
    }
    else if (a == b != c || a == c != b){
        printf("Isosceles");
    }
    else {
       printf("Scalene");
    }



}