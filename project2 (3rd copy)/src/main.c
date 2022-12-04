/*
 * Initial main.c file generated by Glade. Edit as required.
 * Glade will not overwrite this file.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "interface.h"
#include "support.h"

int
main (int argc, char *argv[])
{
  GtkWidget *connexion_pierre;
  GtkWidget *admin_pierre;
  GtkWidget *Gestion_election_pierre;
  GtkWidget *Ajout_election_pierre;
  GtkWidget *Modifier_election_pierre;
  GtkWidget *Supprimer_election_pierre;
  GtkWidget *Ajout_bureaux_Omar;
  GtkWidget *Modifier_bureaux_Omar;
  GtkWidget *Agent_bureau_vote_Omar;
  GtkWidget *Gestion_bureaux_vote_Omar;
  GtkWidget *Suppression_bureau_vote_Omar;
  GtkWidget *Gestion_user_Ramadan;
  GtkWidget *Ajout_utilisateur_Ramadan;
  GtkWidget *Modifier_users_Ramadan;
  GtkWidget *Supprimer_utilisateur_Ramadan;
  GtkWidget *Ajout_reclalmation_Majdi;
  GtkWidget *Modifier_reclamation_Majdi;
  GtkWidget *SUpprimer_reclamation_Majdi;
  GtkWidget *Gestion_reclamation_Majdi;
  GtkWidget *Gestion_liste_electorale_Aziz;
  GtkWidget *AJout_liste_electorale_Aziz;
  GtkWidget *Modifier_liste_electorale_Aziz;
  GtkWidget *Supprimer_liste_electorale_Aziz;
  GtkWidget *Statistique;

#ifdef ENABLE_NLS
  bindtextdomain (GETTEXT_PACKAGE, PACKAGE_LOCALE_DIR);
  bind_textdomain_codeset (GETTEXT_PACKAGE, "UTF-8");
  textdomain (GETTEXT_PACKAGE);
#endif

  gtk_set_locale ();
  gtk_init (&argc, &argv);

  add_pixmap_directory (PACKAGE_DATA_DIR "/" PACKAGE "/pixmaps");

  /*
   * The following code was added by Glade to create one of each component
   * (except popup menus), just so that you see something after building
   * the project. Delete any components that you don't want shown initially.
   */
  connexion_pierre = create_connexion_pierre ();
  gtk_widget_show (connexion_pierre);
  admin_pierre = create_admin_pierre ();
  gtk_widget_show (admin_pierre);
  Gestion_election_pierre = create_Gestion_election_pierre ();
  gtk_widget_show (Gestion_election_pierre);
  Ajout_election_pierre = create_Ajout_election_pierre ();
  gtk_widget_show (Ajout_election_pierre);
  Modifier_election_pierre = create_Modifier_election_pierre ();
  gtk_widget_show (Modifier_election_pierre);
  Supprimer_election_pierre = create_Supprimer_election_pierre ();
  gtk_widget_show (Supprimer_election_pierre);
  Ajout_bureaux_Omar = create_Ajout_bureaux_Omar ();
  gtk_widget_show (Ajout_bureaux_Omar);
  Modifier_bureaux_Omar = create_Modifier_bureaux_Omar ();
  gtk_widget_show (Modifier_bureaux_Omar);
  Agent_bureau_vote_Omar = create_Agent_bureau_vote_Omar ();
  gtk_widget_show (Agent_bureau_vote_Omar);
  Gestion_bureaux_vote_Omar = create_Gestion_bureaux_vote_Omar ();
  gtk_widget_show (Gestion_bureaux_vote_Omar);
  Suppression_bureau_vote_Omar = create_Suppression_bureau_vote_Omar ();
  gtk_widget_show (Suppression_bureau_vote_Omar);
  Gestion_user_Ramadan = create_Gestion_user_Ramadan ();
  gtk_widget_show (Gestion_user_Ramadan);
  Ajout_utilisateur_Ramadan = create_Ajout_utilisateur_Ramadan ();
  gtk_widget_show (Ajout_utilisateur_Ramadan);
  Modifier_users_Ramadan = create_Modifier_users_Ramadan ();
  gtk_widget_show (Modifier_users_Ramadan);
  Supprimer_utilisateur_Ramadan = create_Supprimer_utilisateur_Ramadan ();
  gtk_widget_show (Supprimer_utilisateur_Ramadan);
  Ajout_reclalmation_Majdi = create_Ajout_reclalmation_Majdi ();
  gtk_widget_show (Ajout_reclalmation_Majdi);
  Modifier_reclamation_Majdi = create_Modifier_reclamation_Majdi ();
  gtk_widget_show (Modifier_reclamation_Majdi);
  SUpprimer_reclamation_Majdi = create_SUpprimer_reclamation_Majdi ();
  gtk_widget_show (SUpprimer_reclamation_Majdi);
  Gestion_reclamation_Majdi = create_Gestion_reclamation_Majdi ();
  gtk_widget_show (Gestion_reclamation_Majdi);
  Gestion_liste_electorale_Aziz = create_Gestion_liste_electorale_Aziz ();
  gtk_widget_show (Gestion_liste_electorale_Aziz);
  AJout_liste_electorale_Aziz = create_AJout_liste_electorale_Aziz ();
  gtk_widget_show (AJout_liste_electorale_Aziz);
  Modifier_liste_electorale_Aziz = create_Modifier_liste_electorale_Aziz ();
  gtk_widget_show (Modifier_liste_electorale_Aziz);
  Supprimer_liste_electorale_Aziz = create_Supprimer_liste_electorale_Aziz ();
  gtk_widget_show (Supprimer_liste_electorale_Aziz);
  Statistique = create_Statistique ();
  gtk_widget_show (Statistique);

  gtk_main ();
  return 0;
}

