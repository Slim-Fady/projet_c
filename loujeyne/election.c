#include "election.h"

int ajouter(char * filename, struct election e )
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %d %s %d %s %d %d\n",e.identifiant,e.nbre_habitant,e.municipalite,e.date.jour,e.date.mois,e.date.annee,e.conseillers);
        fclose(f); 
        return 1;
    }
    else return 0;
}

int modifier( char * filename, int identifiant, struct election nouv )
{
    int tr=0;
    election e;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %d %s %d %s %d %d\n",&e.identifiant,&e.nbre_habitant,e.municipalite,&e.date.jour,&e.date.mois,&e.date.annee,&e.conseillers)!=EOF)
        {
            if(e.identifiant== identifiant)
            {
                fprintf(f2,"%d %d %s %d %s %d %d\n",nouv.identifiant,nouv.nbre_habitant,nouv.municipalite,nouv.date.jour,nouv.date.mois,nouv.date.annee,nouv.conseillers);
                tr=1;
            }
            else
                fprintf(f2,"%d %d %s %d %s %d %d\n",e.identifiant,e.nbre_habitant,e.municipalite,e.date.jour,e.date.mois,e.date.annee,e.conseillers);

        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;

}
int supprimer(char * filename, int identifiant)
{   
    int tr=0;
    election e;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %d %s %d %s %d %d\n",&e.identifiant,&e.nbre_habitant,e.municipalite,&e.date.jour,e.date.mois,&e.date.annee,&e.conseillers)!=EOF)
        {
            if(e.identifiant== identifiant)
                tr=1;
            else
                fprintf(f2,"%d %d %s %d %s %d %d\n",e.identifiant,e.nbre_habitant,e.municipalite,e.date.jour,e.date.mois,e.date.annee,e.conseillers);
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;
}

election chercher(char * filename, int identifiant)
{
    election e;
    int tr;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f,"%d %d %s %d %s %d %d\n",&e.identifiant,&e.nbre_habitant,e.municipalite,&e.date.jour,e.date.mois,&e.date.annee,&e.conseillers)!=EOF)
        {
            if(e.identifiant== identifiant)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        e.identifiant=-1;
    return e;
}

