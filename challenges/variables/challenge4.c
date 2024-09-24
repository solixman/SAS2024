#include<stdio.h>
int main(){
float A ;
printf("donner la temperature de l'eau");
scanf("%f", &A);
if(A<=0){

    printf(" its Ice ");

}
    else if(A>=100){

        printf( "its GAZ" );
}
    else{
        printf("its liquid water");
}
    


return 0;



}