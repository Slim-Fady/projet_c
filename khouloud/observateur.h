#ifndef OBSERVATEUR_H_INCLUDED
#define OBSERVATEUR_H_INCLUDED
#include <stdio.h>
typedef struct
{
int id;
    char nom [20];
   char prenom [20];
char nationalite [20];
char genre [20];
char gouvernorat [20];
char appartenance [20];
char liste [20];
int nbv;
} observateur;

int ajouter(char *, observateur );
int modifier( char *, int, observateur );
int supprimer(char *, int id );
observateur  chercher(char *, int id);

#endif

