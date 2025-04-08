#include <stdio.h>
int series( int n){
    int a=0;
    int b=1;
    int c;
 printf("%d %d ",a,b);
    for (int i=3;i<n;i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;     
    }
}
