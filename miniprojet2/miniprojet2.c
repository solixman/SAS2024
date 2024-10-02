#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 typedef struct {
        char name[20];
        char num[20];
        char email[30];
    }contacts;


    contacts contactlist[10];
    int ajout; 
    void back_to_menu(){
        while(getchar()!='\n');
        printf("press entrer to get back to main menu\n");
        getchar();
        }

        
        void show_all(contacts contactlist[]) {
        printf("List of Contacts:\n");
        for (int k=0; k < ajout; k++) {
        printf("Name: %s, Phone: %s, Email: %s \n",contactlist[k].name,contactlist[k].num,contactlist[k].email);
        }
           printf("\n");
        }



int main(){
    contacts contactlist[10];

    strcpy(contactlist[0].name,"soulayman");
    strcpy(contactlist[0].num,"0690544179");
    strcpy(contactlist[0].email,"soulaymanja09@gmail.com");
    int a;
    int ajout=1;

    do{
       printf(" pour ajouter un contact ecrire '1' \npour modifier un contact ecrire '2'   \npour suprimer un contact ecrire '3'  \npour afficher tout les contact ecrire '4'   \npour rechercher un contact ecrire '5' \npress anything else to exit:\n");
       scanf("%d",&a);

        if(a==1){
            if (ajout >= 10) {
        printf("La liste de contacts est pleine.\n");
            }else{
        printf("name :  ");
        scanf("%s",contactlist[ajout].name);
        printf("phone number :  ");
        scanf("%s",contactlist[ajout].num);
        printf("Email :  ");
        scanf("%s",contactlist[ajout].email);
        printf("la nouveau liste  est \n");
        ajout++;
        show_all(contactlist);
        }
        back_to_menu();

         }
          else if (a==2){
           char nom[20];
           printf("donner le nom du contact ");
           scanf("%s",nom);
           for (int i = 0; i <ajout ; i++)
         {
            if (strcmp(nom,contactlist[i].name)==0)
            {
                printf("donner le nouveau num:    ");
                scanf("%s",contactlist[i].num);
                printf("donner le nouveau Email:  ");
                scanf("%s",contactlist[i].email);
                printf("Contact updated successfully \n");
                show_all(contactlist);
            }
        }
        back_to_menu();
       }else if(a==3){
        char nom[20];
           printf("donner le nom du contact ");
           scanf("%s",nom);
           for (int i = 0; i <ajout ; i++)
         {
            int found =0;
            if (strcmp(nom,contactlist[i].name)==0){

                for(int j = i; j <i+1 ; j++){
                    found=1;
                    strcpy(contactlist[i].name,contactlist[i+1].name);
                    strcpy(contactlist[i].num,contactlist[i+1].num);
                    strcpy(contactlist[i].email,contactlist[i+1].email);
                }
                printf("contact deleted seccesfully\n");
                ajout--;
                show_all(contactlist);
              }
              if( found =0 ){
            printf("the contact doesn't exist");
            break;
            }
            }
            back_to_menu();
       }

      else if(a>5 || a<1){
        return 0;
      }

    }while(a<5 || a>1 );

return 0;
}