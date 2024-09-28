#include <stdio.h>
#include<math.h>
int main(){
float A,B,C;
double X, D, X2;
printf("donner a   ");
scanf("%f",&A);
printf("donner b   ");
scanf("%f",&B);
printf("donner C   ");
scanf("%f",&C);
if(A==0){
    printf("Error a=0");
    return 1;
}
D=B*B+4*A*C;
 if(D==0){
    X= (-B/(2*A);
    printf("Solution :   %f ",X);
}
else if (D>0){
    X=((-B+sqrt(D))/(2*A));
    X2=((-B-sqrt(D))/(2*A));
    printf("la solution est: \n X1= %d \n X2= %d", X , X2  );
}
else {
    printf("pas de solution reél");
}

return 0;
}