#include<stdio.h>
#include<string.h>
#include<stdlib.h>

 typedef struct {
        char name[20];
        char sname[20];
        char  tel[15];
        char  age[10];
        char  status[8];
        char  Ref[10];
        char  Date[11];
    }reservation; 

        reservation reservationlist[30];
        int reservationCount = 0;

        void back_to_menu(){
        while(getchar()!='\n');
        printf("press entrer to get back to main menu\n");
        getchar();}

        void show_all(reservation reservationlist[]) {
        printf("List of reservations pour le moment \n");
        for (int k=0; k < reservationCount; k++) {
        printf("Name: %s  ,Last name: %s  ,telephone:  %s ,statut:  %s  ,reference:  %s  ,Date de reservation  %s.  \n \n", reservationlist[k].name , reservationlist[k].sname , reservationlist[k].tel , reservationlist[k].status , reservationlist[k].Ref , reservationlist[k].Date );
        }
        }


        int numforstatus(const char *status) {
    if (strcmp(status, "valide") == 0){
        return 1;
    }
    if (strcmp(status, "reporte") == 0) {
        return 2;
    }
    if (strcmp(status, "annule") == 0){ 
        return 3;
    }
    if (strcmp(status, "traite") == 0){ 
        return 4;
    }
}



int main(){
    int a;
 
    strcpy(reservationlist[reservationCount].name,"abdelhadi");
    strcpy(reservationlist[reservationCount].sname, "kroud");
    strcpy(reservationlist[reservationCount].tel, "0698875465");
    strcpy(reservationlist[reservationCount].age, "19");
    strcpy(reservationlist[reservationCount].status,"reporte");
    strcpy(reservationlist[reservationCount].Ref, "abd01");
    strcpy(reservationlist[reservationCount].Date, "2024-10-02");
    reservationCount++;
    strcpy(reservationlist[reservationCount].name, "noura");
    strcpy(reservationlist[reservationCount].sname, "fathi");
    strcpy(reservationlist[reservationCount].tel, "0687654321");
    strcpy(reservationlist[reservationCount].age, "35");
    strcpy(reservationlist[reservationCount].status,"annule");
    strcpy(reservationlist[reservationCount].Ref, "nou35");
    strcpy(reservationlist[reservationCount].Date, "2024-10-01");
    reservationCount++;
    strcpy(reservationlist[reservationCount].name, "hamid");
    strcpy(reservationlist[reservationCount].sname, "lkassri");
    strcpy(reservationlist[reservationCount].tel, "0698875465");
    strcpy(reservationlist[reservationCount].age, "30");
    strcpy(reservationlist[reservationCount].status,"valide");
    strcpy(reservationlist[reservationCount].Ref, "ham30");
    strcpy(reservationlist[reservationCount].Date, "2024-10-01");
    reservationCount++;
    strcpy(reservationlist[reservationCount].name, "soulayman");
    strcpy(reservationlist[reservationCount].sname, "jaafar");
    strcpy(reservationlist[reservationCount].tel, "0687654321");
    strcpy(reservationlist[reservationCount].age, "25");
    strcpy(reservationlist[reservationCount].status,"reporte");
    strcpy(reservationlist[reservationCount].Ref, "sou25");
    strcpy(reservationlist[reservationCount].Date, "2024-10-02");
    reservationCount++;
    strcpy(reservationlist[reservationCount].name, "salim");
    strcpy(reservationlist[reservationCount].sname, "fathi");
    strcpy(reservationlist[reservationCount].tel, "0632548798");
    strcpy(reservationlist[reservationCount].age, "22");
    strcpy(reservationlist[reservationCount].status,"annule");
    strcpy(reservationlist[reservationCount].Ref, "sal22");
    strcpy(reservationlist[reservationCount].Date, "2024-10-02");
    reservationCount++;
    strcpy(reservationlist[reservationCount].name, "hmad");
    strcpy(reservationlist[reservationCount].sname, "cha3ri");
    strcpy(reservationlist[reservationCount].tel, "0687654321");
    strcpy(reservationlist[reservationCount].age, "23");
    strcpy(reservationlist[reservationCount].status, "reporte");
    strcpy(reservationlist[reservationCount].Ref,"hma23");
    strcpy(reservationlist[reservationCount].Date, "2024-10-01");
    reservationCount++;
    strcpy(reservationlist[reservationCount].name, "brahim");
    strcpy(reservationlist[reservationCount].sname, "jaafar");
    strcpy(reservationlist[reservationCount].tel, "0695656531");
    strcpy(reservationlist[reservationCount].age, "54");
    strcpy(reservationlist[reservationCount].status,"traite");
    strcpy(reservationlist[reservationCount].Ref, "bra54");
    strcpy(reservationlist[reservationCount].Date, "2024-10-03");
    reservationCount++;
    strcpy(reservationlist[reservationCount].name, "oussama");
    strcpy(reservationlist[reservationCount].sname, "kasse");
    strcpy(reservationlist[reservationCount].tel, "0987654321");
    strcpy(reservationlist[reservationCount].age, "23");
    strcpy(reservationlist[reservationCount].status,"valide");
    strcpy(reservationlist[reservationCount].Ref, "ous23");
    strcpy(reservationlist[reservationCount].Date, "2024-10-04");
    reservationCount++;
    strcpy(reservationlist[reservationCount].name, "imrane");
    strcpy(reservationlist[reservationCount].sname, "jaafar");
    strcpy(reservationlist[reservationCount].tel, "0695656531");
    strcpy(reservationlist[reservationCount].age, "22");
    strcpy(reservationlist[reservationCount].status,"annule");
    strcpy(reservationlist[reservationCount].Ref,"imr22");
    strcpy(reservationlist[reservationCount].Date, "2024-10-02");
    reservationCount++;
    strcpy(reservationlist[reservationCount].name,"hamza");
    strcpy(reservationlist[reservationCount].sname,"nicha");
    strcpy(reservationlist[reservationCount].tel, "0687654321");
    strcpy(reservationlist[reservationCount].age, "12");
    strcpy(reservationlist[reservationCount].status,"traite");
    strcpy(reservationlist[reservationCount].Ref,"ham12");
    strcpy(reservationlist[reservationCount].Date,"2024-10-01");
    reservationCount++;

    do{
       printf(" pour ajouter une reservation ecrire '1' \npour modifier une reservation ecrire '2'   \npour suprimer une reservation ecrire '3'  \npour afficher tout les reservations ecrire '4'   \n pour aficher les detail d'une seul reservation ecrire '5'   \npour le tri des reservations ecrire 6  \npour aficher les statistique ecrire 7 \npress anything else to exit:\n");
       scanf("%d",&a);






        if(a==1){
            if ( reservationCount >= 30) {
        printf("La liste de contacts est pleine.\n");
            }else{
        printf("donner les information du nouvelle reservation \n");
        printf("name  :  ");
        scanf("%s",reservationlist[reservationCount].name);
        printf("lastname :  ");
        scanf("%s",reservationlist[reservationCount].sname);
        printf("phone number :  ");
        scanf("%s",reservationlist[reservationCount].tel);
        printf("age  :   ");
        scanf("%s",reservationlist[reservationCount].age);
        printf("statut (validé, reporté, annulé, traité) :  ");
        scanf("%s",reservationlist[reservationCount].status);
        printf("Date de reservation a la forme  aaaa-mm-jj :  ");
        scanf("%s",reservationlist[reservationCount].Date);
        printf("reference unique  :  ");
        scanf("%s",reservationlist[reservationCount].Ref);
         for(int i=0;i<reservationCount;i++){
             if(strcmp(reservationlist[reservationCount].Ref,reservationlist[i].Ref)==0){
                printf("ce reference est deja active, s'il vous plait saisir un otre");
                scanf("%s",reservationlist[reservationCount].Ref);
             }
         }
        reservationCount++;
        printf(" la liste a ete mise a jour \n ");
        show_all(reservationlist);
        }
        back_to_menu();
        }
        
        
        
        
        
        else if(a==2){
            char refer[10];
           printf("donner le reference de reservation que vous souhaitez modifier \n");
           scanf("%s",refer);
           int found=0;
           for (int i = 0; i < reservationCount ; i++){

        if (strcmp(reservationlist[i].Ref,refer)==0){
        found=1;
        printf(" donner le nouveau prenom  :  ");
        scanf("%s",reservationlist[i].name);
        printf("donner le nouveau nom :  ");
        scanf("%s",reservationlist[i].sname);
        printf("donner le nouveau num de telephone :  ");
        scanf("%s",reservationlist[i].tel);
        printf(" donner le nouveau age  :   ");
        scanf("%s",reservationlist[i].age);
        printf("donner la nouvelle statut (validé, reporté, annulé, traité) :  ");
        scanf("%s",reservationlist[i].status);
        printf("Date de reservation a la forme  aaaa-mm-jj :  ");
        scanf("%s",reservationlist[i].Date);
        printf("le nouveau reference unique  :  ");
        scanf("%s",reservationlist[i].Ref);
            break;
            }
            }if(found==0){
               printf("ce reference n'exist pas");
            }
        
        
        show_all(reservationlist);
        back_to_menu();
        }
        
         


        
           else if(a==3){
             char refer[8];
           printf("donner le reference de reservation que vous souhaitez supprime \n");
           scanf("%s",refer);
           for (int i = 0; i < reservationCount ; i++){
            int found =0;
            if (strcmp(refer,reservationlist[i].Ref)==0){
               
                for(int j = i; j <i+1 ; j++){
                    found=1;
                    strcpy(reservationlist[i].name,reservationlist[i+1].name);
                    strcpy(reservationlist[i].sname,reservationlist[i+1].sname);
                    strcpy(reservationlist[i].tel,reservationlist[i+1].tel);
                    strcpy(reservationlist[i].age,reservationlist[i+1].age);
                    strcpy(reservationlist[i].status,reservationlist[i+1].status);
                    strcpy(reservationlist[i].Date,reservationlist[i+1].Date);
                    strcpy(reservationlist[i].Ref,reservationlist[i+1].Ref);
                }
                printf("contact deleted seccesfully\n");
                reservationCount--;
                show_all(reservationlist);
              }
              if( found ==0 ){
            printf("the contact doesn't exist");
            break;
            }
            }
            back_to_menu();
            
       
       
        }else if(a==4){
            printf("voici la liste \n \n");
            show_all(reservationlist);
        }
        
        
        
        else if(a==5){
            int CH;
            printf("celect 1 pour rechercher avec reference \n celect 2 pour rechercher avec nom ");
            scanf("%d",&CH);
            if(CH==1){
         printf("donner la reference de la reservation que tu souhaite aficher");
         char refer[8];
         scanf("%s",refer);
           for (int i = 0; i < reservationCount ; i++){
              int found =0;
              if (strcmp(refer,reservationlist[i].Ref)==0){
                found =1;
                printf("Name: %s  ,Last name: %s  ,telephone:  %s ,statut:  %s  ,reference:  %s  ,Date de reservation  %s.   \n", reservationlist[i].name , reservationlist[i].sname , reservationlist[i].tel , reservationlist[i].status , reservationlist[i].Ref , reservationlist[i].Date );
                break;
             }if( found ==0 ){
              printf("ce reference n'exist pas");
              show_all(reservationlist);
              break;
             }
           }
           }else if(CH==2){
            printf("donner le nom de la reservation que tu souhaite aficher: \n");
             char nom[20];
         scanf("%s",nom);
         int found =0;
           for (int i = 0; i < reservationCount ; i++){
              
              if (strcmp(nom,reservationlist[i].name)==0){
                found =1;
                printf("Name: %s  ,Last name: %s  ,telephone:  %s ,statut:  %s  ,reference:  %s  ,Date de reservation  %s.   \n", reservationlist[i].name , reservationlist[i].sname , reservationlist[i].tel , reservationlist[i].status , reservationlist[i].Ref , reservationlist[i].Date );
                break;
             }
             }if( found ==0 ){
              printf("ce nom n'exist pas \n");
              show_all(reservationlist);
              break;
           }
           }
           back_to_menu();
        
        }
        
        else if(a==6){
            printf("taper '1' pour Tri les reservations par Nom \n et '2' pour tri les reservations par statut \n ");
            int n;
            scanf("%d",&n);
            if(n==1){
           for (int i = 0; i < reservationCount -1; i++) {
        for (int j = 0; j < reservationCount - i-1; j++) {
            if (strcmp(reservationlist[j].name, reservationlist[j + 1].name) > 0) {

                reservation A = reservationlist[j];
                reservationlist[j] = reservationlist[j + 1];
                reservationlist[j + 1] = A;

             }
           }
         }        
        }else if(n==2){
            for (int i = 0; i < reservationCount - 1; i++) {
            for (int j = i + 1; j < reservationCount; j++) {
            if (numforstatus(reservationlist[i].status) > numforstatus(reservationlist[j].status)) {
                reservation A = reservationlist[j];
                reservationlist[j] = reservationlist[i];
                reservationlist[i] = A;
            }
        }
        }

        }
        else{
            printf("Essayez encore une fois avec 2 ou 1");
            back_to_menu();
        }
        show_all(reservationlist);
        back_to_menu();
        } 
        
        
        
        
        
        
        else if (a==7) {
            int choix;
            printf("pour la moyenne d'age des patients select'1' \n pour le nombre de patients par tranche d'age select  '2' \n pour  connaître le nombre total de réservations par statut celect 3  \n");
            scanf("%d",&choix);
            if(choix ==1){
          int Sage = 0;  
          int countA = 0;
          for (int i = 0; i < reservationCount; i++) {
        int AGE= atoi(reservationlist[i].age);  
         if (AGE > 0) {  
            Sage += AGE;
            countA++;
            }
            }
            if (countA > 0) {
            float moyenne = Sage /countA;
            printf("The average age is: %.2f\n", moyenne);
            } else {
            printf("No valid ages to calculate the average.\n");
            }
        } else if(choix==2){
             int A1=0;
         int A2=0;
         int A3=0;
         for (int i = 0; i < reservationCount; i++) {
         int AGE = atoi(reservationlist[i].age);
        if (AGE>= 0 && AGE <= 18) {
            A1++;
        } else if (AGE >= 19 && AGE <= 35) {
            A2++;
        } else if (AGE>= 36) {
            A3++;
        }
        }
         printf("il y a %d personnes dans la tranche de 0 a 18ans  \n il y a %d personnes dans la tranche de 19 a 35ans \n il y a %d personnes dans la tranche de +36 ans \n ",A1,A2,A3);

        }else if(choix ==3){
          int annule=0;
          int valide=0;
          int reporte=0;
          int traite=0;
          for (int i = 1; i < reservationCount+1; i++) {
         int AGE = atoi(reservationlist[i].age);
         if (numforstatus(reservationlist[i].status) <2 && numforstatus(reservationlist[i].status)>0 ) {
            valide++;
        } else if (numforstatus(reservationlist[i].status)<3 && numforstatus(reservationlist[i].status)>1) {
            reporte++;
        } else if (numforstatus(reservationlist[i].status)<4 && numforstatus(reservationlist[i].status)>2) {
            annule++;
        }else if(numforstatus(reservationlist[i].status)<5 && numforstatus(reservationlist[i].status)>3){
            traite;
        }
        }
          printf("il ya %d annule et %d valide et %d reporte et %d traite \n ",annule,valide,reporte,traite);
        }
         back_to_menu();
        




         }else if(a>7 || a<1){
        return 0;
        }
    }while(a<7||a>1);    
return 0;
}        
       