#include <stdio.h>
int main()
{
    int a;
    int b;
    scanf("%d %d ", &a, &b);
    if (a > b){
       printf(a);
    }
    if(b > a) {
       printf(b);
    }
    return 0;

}