#include <stdio.h>
int main(){
    int i,j,n;
    scanf("%c",&n);
    for (i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf("%d",'A' + j - 1);
        }
        printf("\n");
    }
}