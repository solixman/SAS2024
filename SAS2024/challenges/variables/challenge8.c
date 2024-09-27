#include <stdio.h>
#include <math.h>
int main() {
    double a,b,c, M;
    printf("donner le premier nombre");
    scanf("%f",&a);
    printf("donner le 2eme nombre");
    scanf("%f",&b);
    printf("donner le 3eme nombre");
    scanf("%f",&c);
    M=pow(a*b*c , 1/3);
    printf("Moyenne géométrique = %.2f",M);
    return 0;
}