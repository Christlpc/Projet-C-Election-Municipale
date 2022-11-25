#include "election.h"
#include <stdio.h>
#include <string.h>

int ajouter(char * filename, Election E)
{
    FILE * f=fopen(filename , "a");
    if(f!=NULL)
    {
        fprintf(f,"%s %d %d %d %d %d  %d %d %d \n",E.Localite,E.date.jour,E.date.mois,E.date.annee,E.Population,E.Nombre_Conseiller,E.ID,E.Second_Tour,E.Suffrage);
        fclose(f);
        return 1;
    }
    else return 0;
}
int modifier( char * filename, int id, Election New )
{
    int tr=0;
    Election E;

    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("New.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s %d %d %d %d %d  %d %d %d \n",E.Localite,&E.date.jour,&E.date.mois,&E.date.annee,&E.Population,&E.Nombre_Conseiller,&E.ID,&E.Second_Tour,&E.Suffrage)!=EOF)
        {
            if(E.ID== id)
            {
                fprintf(f2," %s %d %d %d %d %d  %d %d %d \n",New.Localite,New.date.jour,New.date.mois,New.date.annee,New.Population,New.Nombre_Conseiller,New.ID,New.Second_Tour,New.Suffrage);
                tr=1;
            }
            else
                fprintf(f2," %s %d %d %d %d %d  %d %d %d \n",E.Localite,E.date.jour,E.date.mois,E.date.annee,E.Population,E.Nombre_Conseiller,E.ID,E.Second_Tour,E.Suffrage);

        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("New.txt", filename);
    return tr;

}
int supprimer(char * filename, int id)
{
    int tr=0;
    Election E;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("New.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f," %s %d %d %d %d %d  %d %d %d \n",E.Localite,&E.date.jour,&E.date.mois,&E.date.annee,&E.Population,&E.Nombre_Conseiller,&E.ID,&E.Second_Tour,&E.Suffrage)!=EOF)
        {
            if(E.ID== id)
                tr=1;
            else
                fprintf(f2," %s %d %d %d %d %d  %d %d %d \n",E.Localite,E.date.jour,E.date.mois,E.date.annee,E.Population,E.Nombre_Conseiller,E.ID,E.Second_Tour,E.Suffrage);
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("New.txt", filename);
    return tr;
}
Election chercher(char * filename, int id)
{
    Election E;
    int tr=0;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f," %s %d %d %d %d %d  %d %d %d \n",E.Localite,E.date.jour,&E.date.mois,&E.date.annee,&E.Population,&E.Nombre_Conseiller,&E.ID,E.Second_Tour,&E.Suffrage)!=EOF)
        {
            if(E.ID== id)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        E.ID=-1;
    return E;

}

float TPE( char * filename){
    int total_electeur=0;
    Utilisateur U;
    int nbr_elec_votant=0;
    int resultat,total;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
    while(fscanf(f," %s %s %d %d %d %d  %s %s  \n",U.Nom,U.Prenom,&U.date,&U.genre,&U.ID,&U.CIN,U.Role,U.Profession,&U.vote)!=EOF)
    {
        if (U.Role=="electeur")
            total++;
        if(U.vote=!-1)
            nbr_elec_votant++;

    }

}
    resultat=   nbr_elec_votant/total_electeur;
}


void TPHF( char * filename, int * f, int *h){
   int total_electeur=0;
    Utilisateur U;
    int nbr_elec_votant=0;
    int resultat,total;
    int nbr_fe=0;
    int nbr_ho=0;
    FILE * f1=fopen(filename, "r");
    if(f!=NULL)
    {
    while(fscanf(f," %s %s %d %d %d %d  %s %s  \n",U.Nom,U.Prenom,&U.date,&U.genre,&U.ID,&U.CIN,U.Role,U.Profession,&U.vote)!=EOF)
    {
        if (U.Role=="electeur")
            total++;
        if(U.genre==1)
            nbr_fe++;
        else if (U.genre==2)
            nbr_ho++;

    }
    }
    *f=nbr_fe/total;
    *h=nbr_ho/total;
}

