#ifndef OBSERVATEUR_H_INCLUDED
#define OBSERVATEUR_H_INCLUDED
#include <stdio.h>
typedef struct observateur 
{
int id;
char nom [20];
char prenom [20];
char nationalite [30];
char genre [20];
char gouvernorat [20];
char appartenance [50];
char choix_liste [20];
int nbv;
} observateur;

int ajouter(char filename[20], struct observateur );
int modifier(char * filename, int id, struct observateur );
int supprimer(char * filename, int id);
observateur  chercher(char * filename,int id);

#endif

