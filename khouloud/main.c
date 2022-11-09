#include <stdio.h>
#include <string.h>
#include"observateur.h"

int main()
{
   
    int x=ajouter("observateur.txt", o1);
    /*
    if(x==1)
        printf("\najout d'un observateur  avec succés");
    else printf("\nechec ajout");
        */
    x=modifier("observateur.txt",1,o2 );

    if(x==1)
        printf("\nModification de observateur  avec succés");
    else printf("\nechec Modification");
    x=supprimer("observateur.txt",1 );
    if(x==1)
        printf("\nSuppression d'un observateur  avec succés");
    else printf("\nechec Suppression");
    o3=chercher("observateur.txt",3 );
    if(o3.id==-1)
        printf("introuvable");
    return 0;
}


