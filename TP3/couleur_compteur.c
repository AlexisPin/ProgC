/*
Nom du fichier : couleur_compteur.c
Auteur : Alexis PINCEMIN
Objectif : comptez le nombre de couleurs identique dans un tableau de 100 couleurs.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define NOMBRE_COULEURS 100

int main(){

/*
On créer la struct couleur avec les 4 paramètres
*/
typedef struct couleur{
	unsigned char rouge;
	unsigned char vert;
	unsigned char bleu;
	unsigned char alpha;
}couleur;

srand(time(NULL));

/*
On créer le tableaux des 100 couleurs
*/
couleur tableauCouleurs[NOMBRE_COULEURS];

/*
On rempli initialise les valeurs rgba pour les 100 couleurs
*/
for(int i = 0; i < NOMBRE_COULEURS; i++){

	tableauCouleurs[i].rouge = rand() % 256;
	tableauCouleurs[i].vert = rand() % 256;
	tableauCouleurs[i].bleu = rand() % 256;
	tableauCouleurs[i].alpha = rand() % 256;
}


couleur tabCouleursCompte[NOMBRE_COULEURS];

for(int i = 0; i < NOMBRE_COULEURS-1; i++){
	int compteur = 1;
	for(int j = i+1; i < NOMBRE_COULEURS; i++){
		if(tableauCouleurs[i].rouge == tableauCouleurs[j].rouge && 
		tableauCouleurs[i].vert == tableauCouleurs[j].vert && 
		tableauCouleurs[i].bleu == tableauCouleurs[j].bleu && 
		tableauCouleurs[i].alpha == tableauCouleurs[j].alpha){
			for(int h = 0; h < NOMBRE_COULEURS; h++){
			if(!(tabCouleursCompte[h].rouge == tableauCouleurs[h].rouge &&
			tabCouleursCompte[h].vert == tableauCouleurs[h].vert &&
			tabCouleursCompte[h].bleu == tableauCouleurs[h].bleu &&
			tabCouleursCompte[h].alpha == tableauCouleurs[h].alpha))
			{tabCouleursCompte[i].rouge = tableauCouleurs[i].rouge;
			tabCouleursCompte[i].vert = tableauCouleurs[i].vert;
			tabCouleursCompte[i].bleu = tableauCouleurs[i].bleu;
			tabCouleursCompte[i].alpha = tableauCouleurs[i].alpha;}
			}
		}

		}
	printf("couleur %d : rouge = 0x%x, vert = 0x%x, bleu = 0x%x, alpha = 0x%x %d\n",i+1,tabCouleursCompte[i].rouge,tabCouleursCompte[i].vert,
		tabCouleursCompte[i].bleu,tabCouleursCompte[i].alpha, compteur);
}


/*for(int i = 0; i < 10; i++){
	printf("couleur %d : rouge = 0x%x, vert = 0x%x, bleu = 0x%x, alpha = 0x%x \n",i+1,  tableauCouleurs[i].rouge,tableauCouleurs[i].vert,
	tableauCouleurs[i].bleu,tableauCouleurs[i].alpha);
}*/
return 0;
}

