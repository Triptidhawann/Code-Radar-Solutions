#inlude <stdio.h>
int main(){
    int n,i,j;
    scanf("%c",&n);
    for (i=0;i<=n;i++){
        for (j=0;j<=i;j++){
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}