#include <stdio.h>

int main() {
    float A;
    printf("Entre ton moyenne ");
    scanf("%f",&A);

    if(A>=0 && A<10){
        printf("tu as recalé");
    }
    else if(A<12 && A>=10){
        printf("tu as passable");
    }
    else if(A>=12 && A<14){
        printf("tu as assez bien");
    }
    else if(A>=14 && A<16) {
        printf("tu as bien");
    }
    else if(A>=16 && A<=20) {
    
    printf("tu as tres bien");
    }
    else{
        printf("huh?!");
    }
    return 0;
}
