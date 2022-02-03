/*
Nom du fichier : etudiant_bd.c
Auteur : Alexis PINCEMIN
Objectif : écrire dans un fichier les informations de 5 étudiants
*/

#include <stdio.h>
#include <stdlib.h>
#include "fichier.h"


#define NOMBRE_ETUDIANTS 2
int main(void)
{
    char fichier[] = "./etudiant.txt";
    char donnee[135];

    for(int i = 0 ; i < NOMBRE_ETUDIANTS; i++)
    {
        printf("Prenom : ");
        scanf(" %30[^\n]",donnee);
        ecrire_dans_fichier(fichier, donnee);

        printf("Nom : ");
        scanf(" %30[^\n]",donnee);
        ecrire_dans_fichier(fichier, donnee);

        printf("Adresse : ");
        scanf(" %30[^\n]",donnee);
        ecrire_dans_fichier(fichier, donnee);

        printf("1er note : ");
        scanf(" %30[^\n]",donnee);
        ecrire_dans_fichier(fichier, donnee);

        printf("2eme note : ");
        scanf(" %30[^\n]",donnee);
        FILE *fic=fopen(fichier,"a");
        fputs(donnee,fic);
        fputs("\n",fic);
        fclose(fic);
        
    }

    return 0;
}


void ecrire_dans_fichier(char *nom_de_fichier, char *message)
{
    FILE *fic=fopen(nom_de_fichier,"a");
    fputs(message,fic);
    fputs(", ",fic);
    fclose(fic);
}
