#include <stdio.h>
int main(){
    char n,i,j;
    scanf("%c",&n);
    for (i=1;i<=n;i++){
        for (j=1;j<=i;j++){
            printf("%c",j);
        }
        printf("\n");
    }

}