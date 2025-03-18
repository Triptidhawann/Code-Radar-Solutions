#include <stdio.h>
int main(){
    int i,j,n;
    scanf("%c",&n);
    for (i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%c",j);
        }
        printf("\n");
    }
}