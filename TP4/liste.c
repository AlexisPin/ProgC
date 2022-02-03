#include <stdio.h>
#include "liste.h"
#include <stdlib.h>


void insertion(couleur *color,liste_couleurs *li)
{
	if(li == NULL)
	{
		li->c = color;
		li->next = NULL;
		
	}

	liste_couleurs *newColor;


	newColor->next = li;
	newColor->c = color;
	li = newColor;


}                
void parcours(liste_couleurs *li)
{
	if(li == NULL)
	{
		printf("Rien à afficher la liste est vide\n");
	}
	
	int i;
	while(li != NULL)
	{
		++i;
		printf("couleur %d (rouge : 0x%x vert :0x%x bleu : 0x%x alpha : 0x%x \n", i, li->c->rouge, li->c->vert,li->c->bleu,li->c->alpha);
		li = li->next;
	}
	
}
