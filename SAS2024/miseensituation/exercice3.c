#include <stdio.h>

int main(){

    int n,a,i;
    printf("donnez un nombre:   ");
    scanf("%d",&n);
    a=n-1;
    for(i<=2;i<a;i++);
    if(n % i==1){
        printf("c'est un nombre premier");
    }
    else{
        printf("ce n'est pas un nombre premier");
    }
    

return 0;

}