#include<stdio.h>
#include<math.h>
int main(){
    float A , C, B, D;
    printf("donner un nombre   ");
    scanf("%f",&A);
    printf("donner un autre nombre");
    scanf("%f",&B);
      C= A+B;
      D=C*3;

            
    if (A==B)
    {
        printf("laresulta est %f:",D);
    }
    else{
        printf("la resultat est %f",C);
    }

return 0 ;

}