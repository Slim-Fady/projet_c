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
char choix_liste [20];
int nbv;
} observateur;

int ajouter(char filename[20], struct observateur o );
int modifier(char * filename, int id, struct observateur nouv );
int supprimer(char * filename, int id);
observateur  chercher(char * filename,int id);

#endif

