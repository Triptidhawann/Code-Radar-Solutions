#include <stdio.h>
int main(){
    int a;
    int b;
    scanf("%d %d ", &a,&b);
    if (a==b){
        printf("Equal\n");
    }
    else if(a>b){
        printf("First\n");
    }
    else if (a<b){
        printf("Second");
    }

}