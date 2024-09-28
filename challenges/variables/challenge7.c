#include<stdio.h>
int main(){
    float a , b , c, M;
    printf("donner le premier nombre");
    scanf("%f",&a),
    printf("donner le 2eme nombre");
    scanf("%f",&b);
    printf("donner le 3eme nombre");
    scanf("%f",&c);
    M=(a*2+b*3+c*5)/10;
    printf("le moyenne est%f",M);
    return 0 ;

}