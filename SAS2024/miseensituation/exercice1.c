#include <stdio.h>

int main(){
float A,B,C,D;
  printf("donner la base    :");
  scanf("%f",&A);
  printf("donner le hauteur   :");
  scanf("%f",&B);
  C=(A*B)*0.5;
  D=A*3;
  printf("l'aire=  %.2f \n le perimetre=  %.0f ",C,D);

return 0;

}