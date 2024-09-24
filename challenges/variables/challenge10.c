#include <stdio.h>
#include <math.h>

int main() {
    float  r , Pi=3.14 , S;
    printf("donner le rayon du cercle");
    scanf("%f", &r);
    S=pow(r,3)*Pi*4/3;
    printf("r=%f",S);
    return 0;
    

}