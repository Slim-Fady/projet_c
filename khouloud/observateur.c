#include "observateur.h"

int ajouter(char * filename, reclamation r )
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%s %s %s %s %s %s %s %d\n",o.nom,o.prenom,o.nationalite,o.genre,o.gouvernorat,o.appartenance,o.list,o.nbv);
        fclose(f);
        return 1;
    }
    else return 0;
}
int modifier( char * filename, char  nom, reclamation nouv )
{
    int tr=0;
    observateur o;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s %s %s %s %s %s %s %d\n",o.nom,o.prenom,o.nationalite,o.genre,o.gouvernorat,o.appartenance,o.list,&o.nbv))!=EOF)
        {
            if(r.nom== nom)
            {
                fprintf(f2,"%s %s %s %s %s %s %s %d\n",o.nom,o.prenom,o.nationalite,o.genre,o.gouvernorat,o.appartenance,o.list,o.nbv));
                tr=1;
            }
            else
                fprintf(f2,"%s %s %s %s %s %s %s %d\n",o.nom,o.prenom,o.nationalite,o.genre,o.gouvernorat,o.appartenance,o.list,o.nbv));

        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;

}
int supprimer(char * filename, int id)
{
    int tr=0;
    observateur o ;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s %s %s %s %s %s %s %d\n",o.nom,o.prenom,o.nationalite,o.genre,o.gouvernorat,o.appartenance,o.list,&o.nbv))!=EOF)
        {
            if(o.id== id)
                tr=1;
            else
                fprintf(f2,"%s %s %s %s %s %s %s %d\n",o.nom,o.prenom,o.nationalite,o.genre,o.gouvernorat,o.appartenance,o.list,o.nbv));
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;
}
observateur  chercher(char * filename,int id)
{
    observateur o ;
    int tr;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f,"%s %s %s %s\n",o.nom,o.prenom,o.email,o.votre_message)!=EOF)
        {
            if(o.id== id)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        o.id=-1;
    return r;
