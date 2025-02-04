#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    scanf("%d %d %d " ,&a ,&b,&c);
    if ((a == b )||(b== c)){
        printf("Equilateral\n");
    }
    else if (a == b != c && a == c != b && b == c != a){
        printf("Isosceles\n");
    }
    else {
       printf("Scalene");
    }



}