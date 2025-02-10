int isprime(int a){
    int is_prime=0;
    if(a==0 || a==1){
        is_prime =1;
    }
    else{
        for (int i=2;i<a;i++){
            if(a%i==0){
                is_prime=1;
                break;
            }
        }
    }
    return is_prime;
}
int main(){
    int a;
    scanf("%d",&a);
    if(isprime(a)==0){
        printf("1");
    }
    else{
        printf("0");
    }
return 0;
}
