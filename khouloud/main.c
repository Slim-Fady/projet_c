#include <stdio.h>
#include <string.h>
#include"reclamation.h"

int main()
{
reclamation r1={111,"Belhadj", "Khouloud" , "khouloud.belhadj@esprit.tn","Problème"},
r2={222,"Guemri", "Achraf" , "achraf.guemri@esprit.tn","Problème"},
r3={333,"Asma", "Belhsan" , "asma.belhsan@esprit.tn","Problème"};
    
    int x;
    x=ajouter("reclamation.txt", r1);
    if(x==1)
        printf("\n 1/Ajout d'une  réclamation  avec succés");
    else printf("\n Echec ajout");

    // x=ajouter("reclamation.txt", r2);
   // if(x==1)
    //    printf("\n Ajout d'une réclamation  avec succés");
   // else printf("\n Echec ajout");

   // x=ajouter("reclamation.txt", r3);
   // if(x==1)
      //  printf("\n Ajout d'une réclamation  avec succés");
   // else printf("\n Echec ajout");

    x=modifier("reclamation.txt",111,r2 );
    if(x==1)
        printf("\n 2/Modification de la  réclamation  avec succés");
    else printf("\n Echec Modification");

    x=supprimer("reclamation.txt",222 );
    if(x==1)
        printf("\n 3/Suppression de la réclamation  avec succés");
    else printf("\n Echec Suppression");
    
    r1=chercher("reclamation.txt",111 );
    if(r1.id==-1)
        printf("introuvable");
    else
        printf("\n existe ");
    return 0;
}


