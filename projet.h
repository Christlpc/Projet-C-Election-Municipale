//#ifndef PROJET_H_INLUDED
#define PROJET_H_INLUDED
#include<stdio.h>

 struct bdv{
int id ;
int cap;
int nbr_salle;
int id_responsable;
int id_agent;
int nbr_agent;
char  adress[100]
} ;
typedef struct bdv bdv ;
int ajouterbdv (char * filename, bdv p );
int modifier(char * filename, int id,bdv nouv);

int supprimer (char * filename, int id);
struct bdv chercher(char * filename, int id);

 // PROJET_H_INLUDED
