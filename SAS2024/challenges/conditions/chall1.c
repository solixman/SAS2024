#include<stdio.h>
#include<math.h>
int main(){
    int A;
printf("donner un nombre:");
scanf("%d",&A);
if (A % 2 == 0)
{
    printf("le nombre est paire");
}

else{
    printf("le nombre est impaire");
}

return 0 ;
}