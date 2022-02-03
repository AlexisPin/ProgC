#include <stdio.h>  

int puissance(int*, int*);

int main(){
  
    int b  = 5;
    int a = 2;
    int resultat;

    int *add_a = &a;
    int *add_b = &b;

    resultat = puissance(add_a, add_b);

    printf("%d \n", resultat);

  return 0;
}

int puissance(int *pt_a, int *pt_b){

    int resultat = *pt_a;

    for(int i = *pt_b; i>1 ; i--){
        resultat *= *pt_a;
    }

    return resultat;
}