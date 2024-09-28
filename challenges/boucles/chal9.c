#include<stdio.h>
#include<math.h>
int main(){
    int n,i;
    printf("donner un nombre:  ");
    scanf("%d",&n);
    if(n<0){
    n=n*(-1);
    } else{
         for(i=0;n!=0;i++){
          n=n/10;
         }
        printf("%d",i);
    }
}    