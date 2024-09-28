#include<stdio.h>
int main(){
    float A, B ;
    printf("donner la vitesse en km/h:   ");
    scanf("%f", &A);
     B=A*0.27778;

    printf("la distance en yards est: %0.4f", B);
    return 0;
}