#include <stdio.h>
int main(){
    int i,n;
    char j;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for (j='A';j<='A'+i ;j++){
            printf("%c ",j);
        }
        printf("\n");
    }

}