#ifndef RECLAMATION_H_INCLUDED
#define RECLAMATION_H_INCLUDED
#include <stdio.h>
typedef struct reclamation
{
    int id ;
    char nom [20];
    char prenom[20];
    char email[100];
    char votre_message[1000];
} reclamation;

int ajouter(char filename[20],struct reclamation );
int modifier( char *filename, int id ,struct reclamation );
int supprimer(char *filename, int id );
reclamation  chercher(char *filename, int id);

#endif

