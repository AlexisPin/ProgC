/*
Nom du fichier : repertoire.c
Auteur : Alexis PINCEMIN
Objectif : manipuler les dossiers
*/

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <unistd.h>
#include "repertoire.h"


int main(int argc, char *argv[])
{
    lire_dossier_iteratif(argv[1]);
    return 0;
}

void lire_dossier(char *folder)
{
    DIR *dir = opendir(folder);
    if (dir == NULL) 
    {
        perror("opendir");
    }
    struct dirent * ent;
    while(ent = readdir(dir))
    {
        printf ("%s  ", ent->d_name);
    }
}

void lire_dossier_recursif(char *folder)
{
    DIR *dir = opendir(folder);
    if (dir == NULL) 
    {
        perror("opendir");
    }
    chdir(folder);
    struct dirent *ent;

    while(ent = readdir(dir))
    {
        if(strcmp(".",ent->d_name) && strcmp("..",ent->d_name))
        {
            if (ent->d_type == DT_DIR)
            {
                printf("./");
            }
            printf ("%s", ent->d_name);
            putchar('\n'); 
        }
        if (ent->d_type == DT_DIR && strcmp(".",ent->d_name) && strcmp("..",ent->d_name) ){
            lire_dossier_recursif(ent->d_name);  
            chdir("..");
        }
    }
    putchar('\n'); 
}

void lire_dossier_iteratif(char *folder)
{
    DIR *dir = opendir(folder);
    if (dir == NULL) 
    {
        perror("opendir");
    }
    chdir(folder);
    struct dirent *ent;

     while(ent = readdir(dir))
    {
        if(strcmp(".",ent->d_name) && strcmp("..",ent->d_name))
        {
            if (ent->d_type == DT_DIR)
            {
                printf("./");
            }
            printf ("%s", ent->d_name);
            putchar('\n'); 
        }
        if (ent->d_type == DT_DIR && strcmp(".",ent->d_name) && strcmp("..",ent->d_name) ){
            DIR *dir = opendir(ent->d_name);
            if (dir == NULL) 
            {
                perror("opendir");
            }
            chdir(ent->d_name);
            struct dirent *ent;
            while(ent = readdir(dir))
            {
                if(strcmp(".",ent->d_name) && strcmp("..",ent->d_name))
                {
                    if (ent->d_type == DT_DIR)
                    {
                        printf("./");
                    }
                    printf ("%s", ent->d_name);
                    putchar('\n'); 
                }
            }
            putchar('\n'); 
            chdir("..");
        }
    }
}