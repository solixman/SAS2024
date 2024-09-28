#include <stdio.h>
#include<math.h>
int main(){
    int A;
    printf("donner u  nombre");
    scanf("%d",&A);
    if(A<0){
        printf("le nombre est negatif");
    }
    else if(A>0){
        printf("le nombre est positive");
    }
    else{
        printf(" le nombre est null");
    }
    return 0;
}