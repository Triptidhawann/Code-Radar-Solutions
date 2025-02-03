#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    scanf("%d %d %d",&a,&b,&c);
    if( a<b || a<c ){
        printf("a");
    }
    else if ( b>a || b>c){
        printf("b");
    
    }
    else
        printf("c");
}