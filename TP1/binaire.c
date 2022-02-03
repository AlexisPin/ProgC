#include <stdio.h>  

#define MAX_SIZE 20

int main(){
  
  int nombre, mask, arrayBinaire[MAX_SIZE], bits, size_opt, decrement;  
  
  printf("nombre à convertir: ");  
  scanf("%d",&nombre);  
  
  mask = 1;
  
for(int i = 0; i < MAX_SIZE; i++){
  bits = (nombre & mask) ?  1 : 0;
  arrayBinaire[i] = bits;
  mask<<=1;
}

size_opt = MAX_SIZE-1;
decrement = MAX_SIZE-1;
  
do{
  if(arrayBinaire[decrement] == 0){
      size_opt -= 1;
      decrement--;}
}while(arrayBinaire[decrement] == 0);
  
for(int i = size_opt; i >= 0; i--){
  printf("%d", arrayBinaire[i]);
}
  return 0;
}