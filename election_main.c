#include <stdio.h>
#include <string.h>
#include "election.h"

void main()
{
     Election E1={"Ariana",10,07,2023,230000,35,001,1,1};

     Election E2={"tunis",10,07,2023,470000,45,002,1,1};

     Election E3={"Ben-Arous",11,07,2023,147000,25,003,1,1},b;


    float taux_par;
    int *f;
    int *h;
    int x;
    x=ajouter("Election.txt", E1);
    x=ajouter("Election.txt", E2);

    if(x==1)
        printf("\nAjout de l'election avec succes");
    else printf("\nechec ajout");

    x=modifier("Election.txt",2,E3 );

   if(x==1)
        printf("\nModification d'election avec succes");
    else printf("\nechec Modification");
    x=supprimer("Election.txt",1 );
    if(x==1)
        printf("\nSuppression d'election avec succes");
    else printf("\nechec Suppression");
    b=chercher("Election.txt",3 );
    if(b.ID==-1)
        printf("\nintrouvable");


    taux_par=TPE( "Utilisateur.txt");
    printf("\n%f",taux_par);
    printf("\n%f",*h);
    printf("\n%f",*f);
}
