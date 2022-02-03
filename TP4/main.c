#include <stdio.h>
#include "liste.h"
#include <time.h>
#include <stdlib.h>


int main(){

couleur *tableauCouleurs[10];

srand(time(NULL));

for(int j = 0; j < 10; j++){
	tableauCouleurs[j]->rouge = rand() % 256;
	tableauCouleurs[j]->vert = rand() % 256;
	tableauCouleurs[j]->bleu = rand() % 256;
	tableauCouleurs[j]->alpha = rand() % 256;

}

liste_couleurs *li;

li = NULL;


parcours(li);
return 0;
}


