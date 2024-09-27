#include <stdio.h>

int main(){

    float A,B;
    printf("entrer ton temperature:");
    scanf("%f",&A);
    if(A>=38){
        printf("Vous avez de la fievre \n");
    }
     else {printf("ton temperature est normale \n");
     }
    return 0;
}