#ifndef USER_H_INCLUDED
#define USER_H_INCLUDED
#include <stdio.h>
#include <string.h>
typedef struct user
{
int id;
int jour,mois,annee;
int cin;
char nom [20];
char prenom [20];
char adress [20];
char genre [20];
char gouvernorat [20];
char role [20];
char vote [20];
int nbv;
int mot_de_passe;
} user;

int ajouter(char fileuti[20], struct user );
int modifier(char * fileuti, int id, struct user );
int supprimer(char * fileuti, int id);
user  chercher(char * fileuti,int id);
int nbobserver(char * fileuti);
int tri_utilisateur(char * fileuti);

#endif
