#include <stdio.h> 

int calculNbCaracteres(char *);
void copyChaineCaracteres(char *, char *);
void concatenationsChaineCaracteres(char *, char *, char*);

int main(){

	char texte[] = "Bonjour ";
	char texte2[] = "tout le monde !!";

	char texte_concatene[calculNbCaracteres(texte)+calculNbCaracteres(texte2)];
	
	char texte_copy[calculNbCaracteres(texte)];

	printf("la chaine contient %d caractères \n", calculNbCaracteres(texte));
	
	copyChaineCaracteres(texte, texte_copy);
	
	printf("Texte copié : ");
	for(int i = 0; i< calculNbCaracteres(texte); i++){
	
	printf("%c", texte_copy[i]);
	if(i == calculNbCaracteres(texte) -1){printf("\n");}

}
	concatenationsChaineCaracteres(texte,texte2, texte_concatene);	

	
	
	for(int i = 0; i< calculNbCaracteres(texte)+calculNbCaracteres(texte2); i++){
	
	printf("%c", texte_concatene[i]);
	if(i == calculNbCaracteres(texte)+calculNbCaracteres(texte2) -1){printf("\n");}

}


	return 0;
}

int calculNbCaracteres(char *texte){
	
	int compteur =0;		
	int i = 0;


	while(1){		
	
	if(texte[i] != '\0'){++compteur;}
	else{break;}
	++i;

}

	return compteur;
}


void copyChaineCaracteres(char *texte, char *copy){
	
	for(int i = 0; i< calculNbCaracteres(texte); i++){
	
		copy[i] = texte[i];
}
	
}


void concatenationsChaineCaracteres(char *texte1, char *texte2, char *texte_complet){
	
int i;

for(i = 0; i< calculNbCaracteres(texte1); i++){

	texte_complet[i] = texte1[i];
		
}

int temp = i;

for(i =0; i < calculNbCaracteres(texte2); i++){

	texte_complet[temp + i] = texte2[i];
		
}	
}

