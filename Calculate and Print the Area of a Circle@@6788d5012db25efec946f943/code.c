#include <stdio.h>

int main(){
    float radius;
    float area;
    const float pie =3.14;
    scanf("%f",&radius);
    area = (radius*radius*pie);
    printf("Area: %.2f",area);
    return 0;
   

}