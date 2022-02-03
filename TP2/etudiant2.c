#include <stdio.h>
#include <string.h>

int main(){
	

typedef struct etudiant{
	char prenom[30];
	char nom[30];
	char address[135];
	int notes1;
	int notes2;
}etudiant;



etudiant groupeEtudiant[5]; 

strcpy(groupeEtudiant[0].prenom, "Jules");
strcpy(groupeEtudiant[0].nom, "Uzumaki");
strcpy(groupeEtudiant[0].address, "122 Kennedi Mount Apt 245");
groupeEtudiant[0].notes1 = 10;
groupeEtudiant[0].notes2 = 6;


strcpy(groupeEtudiant[1].prenom, "Jade");
strcpy(groupeEtudiant[1].nom, "Hatake");
strcpy(groupeEtudiant[1].address, "20584 O'Conner Corner Apt. 765");
groupeEtudiant[1].notes1 = 13;
groupeEtudiant[1].notes2 = 8;

strcpy(groupeEtudiant[2].prenom, "Alice");
strcpy(groupeEtudiant[2].nom, "Aruno");
strcpy(groupeEtudiant[2].address, "41956 Rice Branch Apt. 950");
groupeEtudiant[2].notes1 = 19;
groupeEtudiant[2].notes2 = 17;

strcpy(groupeEtudiant[3].prenom, "Lucas");
strcpy(groupeEtudiant[3].nom, "Rock");
strcpy(groupeEtudiant[3].address, "5117 Rutherford Forest Apt. 583");
groupeEtudiant[3].notes1 = 10;
groupeEtudiant[3].notes2 = 11;

strcpy(groupeEtudiant[4].prenom, "Louise");
strcpy(groupeEtudiant[4].nom, "Rock");
strcpy(groupeEtudiant[4].address, "51770 Reynolds Pines Suite 650");
groupeEtudiant[4].notes1 = 8;
groupeEtudiant[4].notes2 = 15;





for(int i = 0; i< 5; i++){

	printf("Nom : %s \n", groupeEtudiant[i].nom);
	printf("Prenom : %s \n" , groupeEtudiant[i].prenom);
	printf("Addresse : %s \n" , groupeEtudiant[i].address);
	printf("Notes { Programmation en C :  %d, Systemes d'exploitation : %d } \n", groupeEtudiant[i].notes1 , groupeEtudiant[i].notes2);

	printf("\n");

}

return 0;

}





