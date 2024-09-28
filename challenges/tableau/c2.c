#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("donnr le size de tableau:   ");
    scanf("%d",&a);
    int A[a];
    for(int i=0;i<a;i++){
        printf("donner l'element %d    :",i);
        scanf("%d",&A[i]);
    }
    printf("%d",A[0]);
    return 0;
}