#include <stdio.h>
#include <stdio.h>
#include"user.h"
#include <stdlib.h>

int main()
{
    user U ;
    int u;
    int a,x,id;
    do {
    do
{printf("1:Ajouter un utilisateur\n2:Supprimer un utilisateur\n3:Modifier un utilisateur\n4:Chercher un utilisateur\n5:nombre des observateurs\n6:tri des utilisateurs\n0:quit\n");
scanf("%d",&a);
}while ((a<0)||(a>6));
    if (a==1)
    { 
u=saisir();
x= ajouter("user.txt",U);
if (x==1)
   printf("Ajouter avec succes\n");
else
     printf("Echec\n");
    }
    else if (a==2)
    {   printf("Donner l\'identifiant de l\'utilisateur a supprimer\n");
scanf("%d",&id);
x= supprimer("user.txt",id);
if (x==1)
   printf("Suppression avec succes\n");
else
     printf("Echec\n");
    }
    else if (a==3)
    {   printf("Donner l\'identifiant de l\'utilisateur a modifier\n");
scanf("%d",&id);
u= saisir();
x= modifier("user.txt",id,U);
if (x==1)
   printf("Modification avec succes\n");
else
     printf("Echec\n");
    }
    else if (a==4)
    {   printf("Donner l\'identifiant de l\'utilisateur a modifier\n");
scanf("%d",&id);
U= chercher("user.txt",id);
if (id !=-1)
   Afficher(u);
else
     printf("Utilisateur introuvable\n");
    }
    /*user u;
    int a,x,id;


printf("Ecrire votre Nom\n");
fflush(stdin);
//gets(u.nom);
scanf("%s",u.nom);
printf("Ecrire votre Prenom\n");
fflush(stdin);
//gets(U.prenom);
scanf("%s",u.prenom);
printf("Ecrire votre C.I.N\n");
scanf("%d",&u.cin);
printf("Ecrire votre Identifiant\n");
scanf("%d",&u.id);
printf("Donner votre sexe\n");
fflush(stdin);
//gets(u.sexe);
scanf("%s",u.sexe);
printf("Donner votre gouvernorat\n");
fflush(stdin);
//gets(u.gouvernorat);
scanf("%s",u.nationalite);
printf("Ecrire votre date de naissance\n");
scanf("%d%d%d",&u.jour,&u.mois,&u.annee);
printf("Donner votre adresse\n");
fflush(stdin);
//gets(u.adress);
scanf("%s",u.adress);
printf("Donner votre numero de bureau de vote\n");
scanf("%d",&u.nbv);
printf("Ecrire votre Role\n");
fflush(stdin);
//gets(u.role);
scanf("%s",u.role);
//do{
printf("1 : Vote \n0 : Vote blance\n -1 : Pas de vote \n");
scanf("%d",&u.vote);
//}while ((u.vote!=0)||(u.vote!=1)||(u.vote!=(-1)));
printf("Cree une mot de passe\n");
scanf("%d",&u.mot_de_passe);

do {
    do
{printf("1:Ajouter un utilisateur\n2:Supprimer un utilisateur\n3:Modifier un utilisateur\n4:Chercher un utilisateur\n5:nombre des observateurs\n6:tri des utilisateurs\n0:quit\n");
scanf("%d",&a);
}while ((a<0)||(a>6));
    if (a==1)
    {  
x=Ajouter (user.txt",U);
if (x==1)
   printf("Ajouter avec succes\n");
else
     printf("Echec\n");
    }
    else if (a==2)
    {   printf("Donner l\'identifiant de l\'utilisateur a supprimer\n");
scanf("%d",&id);
x=supprimer("Utilisateur.txt",id);
if (x==1)
   printf("Suppression avec succes\n");
else
     printf("Echec\n");
    }
    else if (a==3)
    {   printf("Donner l\'identifiant de l\'utilisateur a modifier\n");
scanf("%d",&id);

x=modifier("user.txt",id,U);
if (x==1)
   printf("Modification avec succes\n");
else
     printf("Echec\n");
    }
    else if (a==4)
    {   printf("Donner l\'identifiant de l\'utilisateur a modifier\n");
scanf("%d",&id);
u=chercher("user.txt",id);
if (u.id!=-1)
   Afficher(u);
else
     printf("Utilisateur introuvable\n");
    }*/
    else if (a==5)
    { 
int nb;
nb=nbobserver("Utilisateur.txt");
printf("Nombre des observateurs est : %d\n",nb);
    }
    else if (a==6)
    { 
user t ;
tri_utilisateur("user.txt");
printf("le tri des utilisateurs est dans le tableau :     ",&t);
    }
   }while (a!=0);
    return 0;
}
