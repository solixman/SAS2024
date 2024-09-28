#include <stdio.h>

int main() {
    int a,b,c;
    char *A[11]={"Janvier", "Fevrier", "Mars", "Avril", "Mai", "Juin", "Juillet", "Aout", "Septembre", "Octobre", "Novembre", "Decembre"};
     printf("Entrez une date au format JJ/MM/AAAA : ");
    scanf("%d/%d/%d", &a, &b, &c);
    
    printf("%d-%s-%d\n", a, A[b - 1], c);
    

    return 0;
}