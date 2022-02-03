#include <stdio.h>
/*
Nom du fichier : sizeof.c
Auteur : Alexis PINCEMIN
Objectif : afficher la taille en octet de différent types
*/

int main()
{
    printf("%ld \n",sizeof(int));
    printf("%ld \n",sizeof(int *));
    printf("%ld \n",sizeof(int **));
    printf("%ld \n",sizeof(char *));
    printf("%ld \n",sizeof(char **));
    printf("%ld \n",sizeof(char ***));
    printf("%ld \n",sizeof(float *));
    printf("%ld \n",sizeof(float **));
    printf("%ld \n",sizeof(float ***));
    return 0;
}
