#include "user.h"

int ajouter(char fileuti[20], struct user u)
{
    FILE * f1 =fopen(fileuti, "a");
    if(f1!=NULL)
    {
        fprintf(f1,"%d %d %s %s %d %d %d  %s %s %d %s %s %s %d\n",u.id,u.mot_de_passe,u.nom,u.prenom,u.jour,u.mois,u.annee,u.genre,u.gouvernorat,u.cin,u.adress,u.role,u.vote,u.nbv);
        fclose(f1);
        return 1;
    }
    else return 0;
}
int modifier( char * fileuti, int id, struct user nouv )
{
    int tr=0;
    user u;
    FILE * f1 =fopen(fileuti, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f1!=NULL && f2!=NULL)
    {
        while(fscanf(f1,"%d %d %s %s %d %d %d  %s %s %d %s %s %s %d\n",&u.id,&u.mot_de_passe,u.nom,u.prenom,&u.jour,&u.mois,&u.annee,u.genre,u.gouvernorat,&u.cin,u.adress,u.role,u.vote,&u.nbv)!=EOF)
        {
            if(u.id== id)
            {
                fprintf(f2,"%d %d %s %s %d %d %d  %s %s %d %s %s %s %d\n",nouv.id,nouv.mot_de_passe,nouv.nom,nouv.prenom,nouv.jour,nouv.mois,nouv.annee,nouv.genre,nouv.gouvernorat,nouv.cin,nouv.adress,nouv.role,nouv.vote,nouv.nbv);
                tr=1;
            }
            else
                fprintf(f2,"%d %d %s %s %d %d %d %s %s %d %s %s %s %d\n",u.id,u.mot_de_passe,u.nom,u.prenom,u.jour,u.mois,u.annee,u.genre,u.gouvernorat,u.cin,u.adress,u.role,u.vote,u.nbv);

        }
    }
    fclose(f1);
    fclose(f2);
    remove(fileuti);
    rename("nouv.txt", fileuti);
    return tr;

}
int supprimer(char *fileuti, int id)
{
    int tr=0;


    user u ;
    FILE * f1 =fopen(fileuti, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f1!=NULL && f2!=NULL)
    {
        while(fscanf(f1,"%d %d %s %s %d %d %d  %s %s %d %s %s %s %d\n",&u.id,&u.mot_de_passe,u.nom,u.prenom,&u.jour,&u.mois,&u.annee,u.genre,u.gouvernorat,&u.cin,u.adress,u.role,u.vote,&u.nbv)!=EOF)
        {
            if(u.id== id)
                tr=1;
            else
                fprintf(f2,"%d %d %s %s %d %d %d  %s %s %d %s %s %s %d\n",u.id,u.mot_de_passe,u.nom,u.prenom,u.jour,u.mois,u.annee,u.genre,u.gouvernorat,u.cin,u.adress,u.role,u.vote,u.nbv);
        }
    }
    fclose(f1);
    fclose(f2);
    remove(fileuti);
    rename("nouv.txt", fileuti);
    return tr;
}
user chercher(char *fileuti,int id)
{
    user u ;
    int tr;
    FILE * f1 =fopen(fileuti, "r");
    if(f1!=NULL)
    {
        while(tr==0&& fscanf(f1,"%d %d %s %s %d %d %d  %s %s %d %s %s %s %d\n",&u.id,&u.mot_de_passe,u.nom,u.prenom,&u.jour,&u.mois,&u.annee,u.genre,u.gouvernorat,&u.cin,u.adress,u.role,u.vote,&u.nbv)!=EOF)
        {
            if(u.id== id)
                tr=1;
        }
    }
    fclose(f1);
    if(tr==0)
        u.id=-1;

    return u;

}
int nbobserver(char *fileuti)
{
    int a=0;
    user u;
   FILE * f1 =fopen(fileuti, "r");
    if(f1!=NULL)
    {   while(fscanf(f1,"%d %d %s %s %d %d %d  %s %s %d %s %s %s %d\n",&u.id,&u.mot_de_passe,u.nom,u.prenom,&u.jour,&u.mois,&u.annee,u.genre,u.gouvernorat,&u.cin,u.adress,u.role,u.vote,&u.nbv)!=EOF)
        {
            if(u.role=="Observateur"){
		a=a+1;}
        }
    }
    fclose(f1);
    return a;
}
void tri_tab(user T[],int n){
 int i,min,j;
 user tampon;



 for (i=0;i<n-1;i++)

{

min=i ;

   for (j=i+1;j<n;j++)

  {

    if (strcmp(T[j].nom,T[min].nom) <0)

        min=j;

  }

tampon=T[i];

T[i]=T[min];

T[min]=tampon;

}


}
int tri_utilisateur(char * fileuti){

    FILE * f1 =fopen(fileuti, "r");
    FILE * f2 =fopen("aux.txt", "w");


    int n=0;
    user t[50];
    user u;
    if(f1==NULL)
         return 0;
    else
        {
 while(fscanf(f1,"%d %d %s %s %d %d %d  %s %s %d %s %s %s %d\n",&u.id,&u.mot_de_passe,u.nom,u.prenom,&u.jour,&u.mois,&u.annee,u.genre,u.gouvernorat,&u.cin,u.adress,u.role,u.vote,&u.nbv)!=EOF)
 {   t[n]=u;
     n++;
}

tri_tab(t,n);

        }


        for(int i=0;i<n;i++){
            u=t[i];
            fprintf(f2,"%d %d %s %s %d %d %d  %s %s %d %s %s %s %d\n",&u.id,&u.mot_de_passe,u.nom,u.prenom,&u.jour,&u.mois,&u.annee,u.genre,u.gouvernorat,&u.cin,u.adress,u.role,u.vote,&u.nbv);
        }



         fclose(f1);
         fclose(f2);
    remove(fileuti);
    rename("aux.txt", fileuti);

    return 1;

}

