

typedef struct couleur{
	unsigned char rouge;
	unsigned char vert;
	unsigned char bleu;
	unsigned char alpha;
}couleur;

/*Définitions liste*/
typedef struct liste_couleurs {                
	couleur *c;
	struct liste_couleurs *next;
}liste_couleurs;             



/*Prototypes*/
void insertion(couleur *c,liste_couleurs *li);                
void parcours(liste_couleurs *li);

