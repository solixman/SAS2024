#include <stdio.h>
#include<math.h>
int main(){
printf("give a year");
int Y, A ;
scanf("%d",&Y);
if (Y>2024)
{
    A=Y-2024;
}
else if(Y<2024){
    A=2024-Y;
}
else{
    printf("naaah man it's gotta be different");
    return 0;
}
int a=A;
int b=A*12;
int c=A*365;
int d=A*365*24;
int e=A*365*24*60;
int f=A*365*24*60*60;
printf("%d years \n %d months\n %d days \n %d hours \n %d minutes \n %d seconds",a,b,c,d,e,f);
return 0;

}

