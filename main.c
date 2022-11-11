#include <stdio.h>
 #include <string.h>
#include"projet.h"

int main()
{
     bdv b1={1,104,57,55,23,1,"7 rue dra win"};

     bdv b2={2,010,045,240,23,1,"tunis "};

     bdv b3={3,10,5,40,23,1,"sfax "};



    int x=ajouterbdv("bdv.txt",  b1);

    if(x==1)
        printf("\najout de point avec succés");
    else printf("\nechec ajout");

    x=modifier("bdv.txt",1,b2 );

    if(x==1)
        printf("\nModification de point avec succés");
    else printf("\nechec Modification");
    x=supprimer("bdv.txt",1 );
    if(x==1)
        printf("\nSuppression de point avec succés");
    else printf("\nechec Suppression");
//b3=chercher("bdv.txt",3 );
    if(b3.id==-1)
        printf("introuvable");
    return 0;
}
