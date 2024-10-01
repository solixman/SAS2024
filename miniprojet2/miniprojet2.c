#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    typedef struct {
        char name[20];
        char num[20];
        char email[30];
    }contacts;
    contacts contactlist[3];
    for(int i=0;i<3;i++){
        printf("name %d:  ",i+1);
        scanf("%s",contactlist[i].name);
        printf("phone number %d :  ",i+1);
        scanf("%s",contactlist[i].num);
        printf("Email %d:  ",i+1);
        scanf("%s",contactlist[i].email);
    }
    int a;
       printf("pour modifier un contact ecrire '1'  \n pour suprimer un contact ecrire '2'  \n pour afficher tout les contact ecrire '3'   \npour rechercher un contact ecrire '4'  \n");
       scanf("%d",&a);


       if(a==1){
        char nom[20];
        printf("donner le nom du contact ");
        scanf("%s",nom);
        for (int i = 0; i <3 ; i++)
        {
            if (strcmp(nom,contactlist[i].name)==0)
            {
                printf("donner le nouveau num:    ");
                scanf("%s",contactlist[i].num);
                printf("donner le nouveau Email:  ");
                scanf("%s",contactlist[i].email);
                printf("Contact updated successfully.");
                return 0;
            }
        }
       }




//not finished yet





    
    for(int i=0;i<3;i++){
        printf(" %s  %s  %s \n",contactlist[i].name,contactlist[i].num,contactlist[i].email);
    }
return 0;
}