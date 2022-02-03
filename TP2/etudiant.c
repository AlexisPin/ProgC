#include <stdio.h> 



int main(){

	char prenom[5][30] = {"Jules","Jade","Alice","Lucas", "Louise"};
	char nom[5][30]= {"Uzumaki","Hatake","Aruno","Rock","Uchiwa"};
	char address[5][130] = {"122 Kennedi Mount Apt 20045", "20584 O'Conner Corner Apt. 765","41956 Rice Branch Apt. 950","5117 Rutherford Forest Apt. 583","51770 Reynolds Pines Suite 650"};
	int notes[5][2] = {
			{10,6},
			{13,8},
			{19,17},
			{10,11},
			{8,15}};



for(int i = 0; i< 5 ; i++){
	
	printf("%d etudiant : prenom : %s, nom : %s, addresse : %s, notes : %ls \n\n",i+1,prenom[i],nom[i],address[i],notes[i]);
}

return 0;
}



	


