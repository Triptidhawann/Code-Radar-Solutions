#include <stdio.h>
int main(){
    int n,i;
    scanf("%c",&n);
    for (i=0;i<=n;i++){
        for (j=0;j<=i;j++){
            printf("%c",j);
        }
        printf("\n");
    }
}