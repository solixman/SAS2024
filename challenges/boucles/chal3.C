#include<stdio.h>
#include<math.h>
int main(){
    int n,i;
    double A=1;
    printf("donner un nombre :   ");
    scanf("%d",&n);
    for(i=n;i>1;i--){
        A=A+i;
        printf("%d+",i);
    }
    printf("1=%f",A);
    return 0;
}