#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
 int main(){
    int a,b,c,A,B,C;
  printf("donner la premiere instant a la fomre HH:MM:SS ");
  scanf("%d:%d:%d",&a,&b,&c);
  printf("donner une otre instant aussia la fomre HH:MM:SS");
  scanf("%d:%d:%d",&A,&B,&C);
  
  if (a < A) {
        printf("Le premier instant vient avant le deuxième.\n");
    } else if (a > A) {
        printf("Le deuxième instant vient avant le premier.\n");
    } else { 
        if (b < B) {
            printf("Le premier instant vient avant le deuxième.\n");
        } else if (b > B) {
            printf("Le deuxième instant vient avant le premier.\n");
        } else { 
            if (c < C) {
                printf("Le premier instant vient avant le deuxième.\n");
            } else if (c > C) {
                printf("Le deuxième instant vient avant le premier.\n");
            } else {
                printf("Il s'agit du même instant.\n");
            }
        }
    }

    return 0;
 }