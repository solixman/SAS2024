#include <stdio.h>
#include <math.h>
int main() {
    double a, b , c , d , e , f , D;

    printf("donner les coordonne de point 1: \n");
    printf("X1=");
    scanf("%lf",&a);
    printf("Y1=");
    scanf("%lf",&b);
    printf("Z1=");
    scanf("%lf",&c);

    printf("donner les coordonne de point 2: \n");

    printf("X2=");
    scanf("%lf",&d);
    printf("Y2=");
    scanf("%lf",&e);
    printf("Z2=");
    scanf("%lf",&f);
    D=sqrt(pow(d-a, 2) + pow(e-b, 2) + pow(f-c, 2));
    printf("la distance entre les deux points= %f",D);
    return 0 ;
    
}