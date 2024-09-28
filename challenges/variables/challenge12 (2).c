#include <stdio.h>
#include<math.h>
int main(){

int A;
printf("donner un nombre de quatre chiffre");
scanf("%d",&A);
int a=A/1000;
int b=(A/100)-(a*10);
int c=(A/10)-(a*100+b*10);
int d=A-(a*1000+b*100+c*10);
printf("l'inverse de %d est %d%d%d%d",A,d,c,b,a);
return 0;

}