#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
 char *jours[7]={"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"};
 
 srand(time(NULL));
 int A=rand()%7;
 printf("le jour choisir est:%s",jours[A]);
 return 0;

}