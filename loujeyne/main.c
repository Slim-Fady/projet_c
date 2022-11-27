#include <stdio.h>
#include <string.h>
#include"election.h"

int main()
{
    election e1= {1,100,"tunis",11,"juin",2000,3},e2= {1,100,"boaicha",11,"juillet",2000,3},e3;
    int x=ajouter("election.txt", e1);

    if(x==1)
        printf("\najout election avec succes");
    else printf("\nechec ajout");


    x=modifier("election.txt",1,e2 );

    if(x==1)
        printf("\nModification election avec succes");
    else printf("\nechec Modification");

    x=supprimer("election.txt",1 );
    if(x==1)
        printf("\nSuppression election avec succes");
    else printf("\nechec Suppression");
    e3=chercher("election.txt",3 );
    if(e3.identifiant==-1)
        printf("\nintrouvable");

    e3=chercher("election.txt",1 );
    if(e3.identifiant==-1)
        printf("\ncet identifiant n'existe pas");
    else printf("\ncet identifiant existe déja");
    return 0;
}

