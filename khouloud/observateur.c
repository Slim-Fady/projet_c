#include "observateur.h"

int ajouter(char filename[20], struct observateur o )
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %s %s %s %s %s %s %s %d\n",o.id,o.nom,o.prenom,o.nationalite,o.genre,o.gouvernorat,o.appartenance,o.choix_liste,o.nbv);
        fclose(f);
        return 1;
    }
    else return 0;
}
int modifier( char * filename, int id, struct observateur nouv )
{
    int tr=0;
    observateur o;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %s %s %s %s %s %s %s %d\n",&o.id,o.nom,o.prenom,o.nationalite,o.genre,o.gouvernorat,o.appartenance,o.choix_liste,&o.nbv)!=EOF)
        {
            if(o.id== id)
            {
                fprintf(f2,"%d %s %s %s %s %s %s %s %d\n",nouv.id,nouv.nom,nouv.prenom,nouv.nationalite,nouv.genre,nouv.gouvernorat,nouv.appartenance,nouv.choix_liste,nouv.nbv);
                tr=1;
            }
            else
                fprintf(f2,"%d %s %s %s %s %s %s %s %d\n",o.id,o.nom,o.prenom,o.nationalite,o.genre,o.gouvernorat,o.appartenance,o.choix_liste,o.nbv);

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
        while(fscanf(f,"%d %s %s %s %s %s %s %s %d\n",&o.id,o.nom,o.prenom,o.nationalite,o.genre,o.gouvernorat,o.appartenance,o.choix_liste,&o.nbv)!=EOF)
        {
            if(o.id== id)
                tr=1;
            else
                fprintf(f2,"%d %s %s %s %s %s %s %s %d\n",o.id,o.nom,o.prenom,o.nationalite,o.genre,o.gouvernorat,o.appartenance,o.choix_liste,o.nbv);
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
        while(tr==0&& fscanf(f,"%d %s %s %s %s %s %s %s %d\n",&o.id,o.nom,o.prenom,o.nationalite,o.genre,o.gouvernorat,o.appartenance,o.choix_liste,&o.nbv)!=EOF)
        {
            if(o.id== id)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        o.id=-1;
int observateur(char *filename,int id)
{
  nbo=0;
  while (id)
  {
    nbo=nbo+1;
    printf("Le nb des observateurs est : %d ",nb0);
   }
  printf("Observateur introuvable");   
}
    return o;

}
