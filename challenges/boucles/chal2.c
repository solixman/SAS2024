#include<stdio.h>
#include<math.h>
int main(){
    int n ;
    double A=1;
    printf("donner un nombre :  ");
    scanf("%d",&n);
    
    if (n < 1) {
        printf(" ressaye et Veuillez entrer un nombre entier positif ");
        return 1;
    }
    else{
        for(int i=n;i>1;i--){
            A*=i;
            printf("%d*",i);
        }     
        printf("1=%f",A);   //code mfrbl hhhhh; walakin khdam.
    }
    return 0;
}