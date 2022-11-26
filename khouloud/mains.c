#include <stdio.h>
#include <string.h>
#include"observateur.h"

int main()
{
  observateur 
o1={111,"Belhadj","Khouloud","Tunisienne","Femme","Nabeul","Organistaion Mondiale","Liste 1",1},
o2={222,"Guemri", "Achraf", "Tunisien","Homme","Tataouine","Presse","Liste 2",2},
o3={333,"Asma","Belhsan","Tunisienne","Femme","Bizerte","Société Civile","Liste 3",3} ;

    int x;
    x=ajouter("observateur.txt", o1);
    if(x==1)
        printf("\n 1/Ajout d'un observateur  avec succés");
    else printf("\n Echec ajout");

    /* x=ajouter("observateur.txt", o2);
    if(x==1)
        printf("\n Ajout d'un observateur  avec succés");
    else printf("\n Echec ajout");

    x=ajouter("observateur.txt", o3);
    if(x==1)
        printf("\n Ajout d'un observateur  avec succés");
    else printf("\n Echec ajout");*/

    x=modifier("observateur.txt",111,o2 );
    if(x==1)
        printf("\n 2/Modification d'un observateur  avec succés");
    else printf("\n Echec Modification");

    x=supprimer("observateur.txt",222);
    if(x==1)
        printf("\n 3/Suppression d'un observateur  avec succés");
    else printf("\n Echec Suppression");

    o3=chercher("observateur.txt",333);
    if(o3.id==-1)
        printf("Introuvable");
    else
        printf("\n Existe ");
    return 0;

}
