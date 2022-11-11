#include "projet.h"

int ajouterbdv(char * filename, struct bdv bdv )
{
    FILE * f=fopen(filename , "a");
    if(f!=NULL)
    {
        fprintf(f," %d %d %d %d %d %d  %s \n",bdv.id,bdv.cap,bdv.nbr_salle,bdv.id_responsable,bdv.id_agent,bdv.nbr_agent,bdv.adress);
        fclose(f);
        return 1;
    }
    else return 0;
}
int modifier( char * filename, int id, bdv nouv )
{
    int tr=0;
     struct  bdv bdv;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f," %d %d %d %d %d %d  %s \n",bdv.id,nouv.cap,nouv.nbr_salle,bdv.id_responsable,bdv.id_agent,bdv.nbr_agent,bdv.adress)!=EOF)
        {
            if(bdv.id== id)
            {
                fprintf(f2," %d %d %d %d %d %d  %s \n",nouv.id,nouv.cap,nouv.nbr_salle,nouv.id_responsable,bdv.id_agent,nouv.nbr_agent,nouv.adress);
                tr=1;
            }
            else
                fprintf(f2," %d %d %d %d %d %d  %s \n",bdv.id,bdv.cap,bdv.nbr_salle,bdv.id_responsable,bdv.id_agent,bdv.nbr_agent,bdv.adress);

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
    bdv bdv;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f," %d %d %d %d %d %d  %s \n",&bdv.id,&bdv.cap,&bdv.nbr_salle,&bdv.id_responsable,&bdv.id_agent,&bdv.nbr_agent,bdv.adress)!=EOF)
        {
            if(bdv.id== id)
                tr=1;
            else
                fprintf(f2," %d %d %d %d %d %d  %s \n",bdv.id,bdv.cap,bdv.nbr_salle,bdv.id_responsable,bdv.id_agent,bdv.nbr_agent,bdv.adress);
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;
}
void chercher(char * filename, int id)
{
    bdv p;
    int tr;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f," %d %d %d %d %d %d  %s \n",&p.id,&p.cap,&p.nbr_salle,&p.id_responsable,&p.id_agent,&p.nbr_agent,p.adress)!=EOF)
        {
            if(p.id== id)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        p.id=-1;
    return p;

}

