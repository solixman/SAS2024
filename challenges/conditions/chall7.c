#include <stdio.h>
#include<math.h>
int main(){
    char A;
    printf("enter a lettre ");
    scanf("%c",&A);
    if(A>='A' && A<='Z'){
        printf("%c is in uppercase", A);

    }
else{
    printf("%c is in lowercase", A);
}
return 0;
}
