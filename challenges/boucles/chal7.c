#include<stdio.h>
#include<math.h>
int main(){
    int n,b=0;
    printf("donner un nombre:  ");
    scanf("%d",&n);
    if(n<0){
    n=n*(-1);
    }
      while (n != 0) {
        b = b * 10 + n % 10;
        n /= 10;     
     } 
     printf("L'entier en ordre inverse est: %d\n", b);
    
return 0;
} 