#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(){


typedef struct couleur{

	unsigned char rouge;
	unsigned char vert;
	unsigned char bleu;
	unsigned char alpha;


}couleur;

srand(time(NULL));

couleur tableauCouleurs[10];

for(int i = 0; i < 10; i++){
	tableauCouleurs[i].rouge = rand() % 256;
	tableauCouleurs[i].vert = rand() % 256;
	tableauCouleurs[i].bleu = rand() % 256;
	tableauCouleurs[i].alpha = rand() % 256;

}


for(int i = 0; i < 10; i++){
	
printf("couleur %d : rouge = %d, vert = %d, bleu = %d, alpha = %d \n",i+1,  tableauCouleurs[i].rouge,tableauCouleurs[i].vert,tableauCouleurs[i].bleu,tableauCouleurs[i].alpha);


}

return 0;

}
