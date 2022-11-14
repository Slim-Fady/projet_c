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
        printf("\najout d'une  reclamation  avec succés");
    else printf("\nechec ajout");

    x=ajouter("reclamation.txt", r2);
    if(x==1)
        printf("\najout d'une reclamation  avec succés");
    else printf("\nechec ajout");

    x=ajouter("reclamation.txt", r3);
    if(x==1)
        printf("\najout d'une reclamation  avec succés");
    else printf("\nechec ajout");

    x=modifier("reclamation.txt",111,r2 );
    if(x==1)
        printf("\nModification de la  reclamation  avec succés");
    else printf("\nechec Modification");

    x=supprimer("reclamation.txt",222 );
    if(x==1)
        printf("\nSuppression de la reclamation  avec succés");
    else printf("\nechec Suppression");
    r3=chercher("reclamation.txt",333 );
    if(r3.id==-1)
        printf("introuvable");
    else
        printf("\n existe ");
    return 0;
}


