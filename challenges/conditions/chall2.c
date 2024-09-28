#include <stdio.h>
#include<math.h>
int main(){

char character;
printf("donner un lettre");
scanf("%c",&character);
switch (character){

        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': 
           printf("c'est un voyelle");
        break;
default:
    printf("c'est pas un voyelle");
}
return 0;
}