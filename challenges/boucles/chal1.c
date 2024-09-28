#include<stdio.h>
int main(){
    int A,B,i;
    printf("donner un nombre ");
    scanf("%d",&A);
    for(i=0;i<=10;B=i++){
        B=A*i;
        printf("%dx%d=%d \n",A,i,B);
    }
    return 0;
}