#include <stdio.h> 


int fibonacci(int);


int main(){
	
	int nb_termes;


	printf("Nombre de termes : ");
	scanf("%d", &nb_termes);

	

	for(int i = 0; i<nb_termes; i++){

	int termes;

	termes = fibonacci(i);

	printf("%d \n", termes);

}
return 0;
}


int fibonacci(int n){

	if(n==0 || n==1){
	return 1;
}
	else
	
	return fibonacci(n-1)+fibonacci(n-2);
}




