#include<stdio.h>
int main () { 
    float K , C;
    printf("donner la temperature en celsius");
    scanf("%f", &C);
    K=C+273.15;
    printf(" la temperature en kulvine est : %f", K);
    return 0;
    
}