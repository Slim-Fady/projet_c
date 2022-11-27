#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
#include <stdio.h>
struct date
{
    int jour;
    char mois[30];
    int annee;
};
typedef struct date date;
struct election
{
    int identifiant ;
    int nbre_habitant ;
    char municipalite[50];
    date date ;
    int conseillers;
};
typedef struct election election;
int ajouter(char *filename, struct election );
int modifier( char *filename, int identifiant, struct election );
int supprimer(char *filename, int identifiant );
election chercher(char *filename, int identifiant);

#endif // POINT_H_INCLUDED

