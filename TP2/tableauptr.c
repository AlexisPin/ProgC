#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>



int main(){


	int intTab[40];
	float floatTab[40];




srand(time(NULL));
	

for(int i = 0; i < 40; i++){
	*(intTab+i) = rand() % 256;
	*(floatTab+i) = (float)rand();

}


printf("Valeur avant : \n");
for(int i = 0; i < 40; i++){
	
printf("%d ,", *(intTab+i));
	
	
}

printf("\n Valeur avant : \n");
for(int i = 0; i < 40; i++){
	
printf("%f ,", *(floatTab+i));
	
	
}

for(int i = 0; i < 40; i++){
	
	if(*(intTab+i) %2 ==0){
		*(intTab+i) *=3; 
}
}

for(int i = 0; i < 40; i++){
	
	if((int)*(floatTab+i) %2 ==0){
		*(floatTab+i) *=3; 
}
	
	
}

printf("\n Valeur après : \n");
for(int i = 0; i < 40; i++){
	
printf("%d ,", *(intTab+i));
	
	
}

printf("\n Valeur après : \n");
for(int i = 0; i < 40; i++){
	
printf("%f ,", *(floatTab+i));
	
	
}

return 0;
}
