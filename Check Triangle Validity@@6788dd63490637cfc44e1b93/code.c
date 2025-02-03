#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    scanf("%d %d %d", &a , &b,&c);
    if (a + b)>c && (b + c)>a  && (a+c)>b{
        printf("Valid\n");
    }
    else{
        printf("Invalid\n");
    } 

    
}