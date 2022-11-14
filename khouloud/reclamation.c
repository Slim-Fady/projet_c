#include "reclamation.h"

int ajouter(char filename[20],struct reclamation r )
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %s %s %s %s\n",r.id,r.nom,r.prenom,r.email,r.votre_message);
        fclose(f);
        return 1;
    }
    else return 0;
}
int modifier( char *filename, int id ,struct reclamation nouv )
{
    int tr=0;
    reclamation r;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %s %s %s %s\n",&r.id,r.nom,r.prenom,r.email,r.votre_message)!=EOF)
        {
            if(r.id== id)
            {
                fprintf(f2,"%d %s %s %s %s\n",nouv.id,nouv.nom,nouv.prenom,nouv.email,nouv.votre_message);
                tr=1;
            }
            else
                fprintf(f2,"%d %s %s %s %s\n",r.id,r.nom,r.prenom,r.email,r.votre_message);

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
    reclamation r ;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %s %s %s %s\n",&r.id,r.nom,r.prenom,r.email,r.votre_message)!=EOF)
        {
            if(r.id== id)
                tr=1;
            else
                fprintf(f2,"%d %s %s %s %s\n",r.id,r.nom,r.prenom,r.email,r.votre_message);
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;
}
reclamation  chercher(char * filename,int id)
{
    reclamation r ;
    int tr;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f,"%d %s %s %s %s\n",&r.id,r.nom,r.prenom,r.email,r.votre_message)!=EOF)
        {
            if(r.id== id)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        r.id=-1;
    return r;

}

