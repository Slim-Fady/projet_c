#include <stdio.h>
#include <string.h>
#include"observateur.h"

int main()
{
  observateur o1={111,"Belhadj", "Khouloud" , "Tunisienne" , "Femme" , "Nabeul" , "x" , "Liste 1",1},
o2={222,"Guemri", "Achraf" , "Tunisien" , "Homme" , "Tataouine" , "y" , "Liste 2",2},
o3={333,"Asma", "Belhsan" , "Tunisienne" , "Femme" , "Bizerte" , "z" , "Liste 3",3} ;
    int x;
    
    x=ajouter("observateur.txt", o1);
    if(x==1)
        printf("\najout d'un observateur  avec succés");
    else printf("\nechec ajout");

    x=ajouter("observateur.txt", o2);
    if(x==1)
        printf("\najout d'un observateur  avec succés");
    else printf("\nechec ajout");

    x=ajouter("observateur.txt", o3);
    if(x==1)
        printf("\najout d'un observateur  avec succés");
    else printf("\nechec ajout");

    x=modifier("observateur.txt",111,o2 );
    if(x==1)
        printf("\n Modification d'un observateur  avec succés");
    else printf("\n echec Modification");

    x=supprimer("observateur.txt",222);
    if(x==1)
        printf("\n Suppression d'un observateur  avec succés");
    else printf("\n echec Suppression");

    o3=chercher("observateur.txt",333);
    if(o3.id==-1)
        printf("introuvable");
    else
        printf("\n existe ");
    return 0;
}
