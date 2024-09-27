#include<stdio.h>
int main(){
    float a , b , A , B , C , D;
    printf("give an evaluation for a");
    scanf("%f",&a);
    printf("give an evaluation for b");
    scanf("%f",&b);
    A=a+b;
    B=a-b;
    C=a*b;
    D=a/b;
    printf("a+b= %0.6f",A);
    printf("a-b= %0.6f",B);
    printf("a*b= %0.6f",C);
    printf("a/b= %0.6f",D);
    return 0;
    
}