/*
Nom du fichier : recherche_dichotomique.c
Auteur : Alexis PINCEMIN
Objectif : cherchant un entier dans le tableau déjà tri en ordre croissant par dichotomie
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define ARRAY_SIZE 100
void echange(int *, int *);
void rechercheDichotomie(int *, int);

int main()
{
    int tab[ARRAY_SIZE];
    srand( time( NULL ) );


    /*on génère le tableau de 100 entiers */
    for(int i = 0; i<ARRAY_SIZE; i++){
        tab[i] = rand() %200;
    }

   /*on tri le tableau*/
   int i,j;
   /* on parcours le tableau et on place la plus petite valeur en 1er position ensuite on cherche la deuxième plus petite valeur et on place en 2eme position etc... */
   for(i=0;i<ARRAY_SIZE-1;i++){
       for(j=i+1;j<ARRAY_SIZE;j++){
	  if ( tab[i] > tab[j] ) {
	   echange(&tab[i],&tab[j]);
       	   }
	}
    }
    rechercheDichotomie(tab, 10);
    return 0;
}

/*
Fonction qui echange deux valeurs
Entrée : nombre a et nombre b à echanger
Sortie : aucune
*/
void echange(int *pt_a, int *pt_b){
    int tmp = *pt_a;
    *pt_a = *pt_b;
    *pt_b = tmp;
}

/*
Fonction qui cherche une valeur dans un tableau par dichotomie
Entrée : tableau, valeur recherché
Sortie : aucune
*/
void rechercheDichotomie(int array[], int valeurRecherche){
int debut, fin, mil;
int trouve;

debut = 0;
fin = ARRAY_SIZE;
trouve = 0;

while(trouve != 1 && debut <= fin){
	mil = floor((debut + fin)/2);
	if(array[mil] == valeurRecherche){trouve = 1;}
	else{
	if(valeurRecherche>array[mil]){debut = mil+1;}
	else{fin = mil -1;}
	}
}
if(trouve == 1){printf("entier présent \n");}
else{printf("entier non présent \n");}
}
