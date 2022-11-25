#ifndef ELECTION_H_INCLUDED
#define ELECTION_H_INCLUDED


 typedef struct {
    int jour;
    int mois;
    int annee;

 }Date;
 typedef struct {
    char Localite[50] ;
    Date date;
    int Population;
    int Nombre_Conseiller;
    int ID;
    int Suffrage;
    int Second_Tour;
}Election ;

typedef struct {
    char Nom[50];
    char Prenom[50];
    int ID;
    int date;
    int genre;
    int CIN ;
    char Role[50];
    char Profession [50];
    int vote;
} Utilisateur;


int ajouter(char * filename, Election E );
int modifier(char * filename, int ID,Election New);
int supprimer(char * filename, int ID);
Election chercher(char * filename, int ID);
float TPE( char * filename);
void TPHF( char * filename, int * f, int *h);



 // PROJET_H_INLUDED




#endif // ELECTION_H_INCLUDED
