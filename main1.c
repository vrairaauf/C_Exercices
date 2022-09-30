#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "player.h"
int main(int argc, char const *argv[])
{ 
	int n;
	int *tabJoueur;
	FILE *fic = fopen("s16.data", "r+");
	int lettre=0;
	signed char chaine[256];
	signed char nom[20], prenom[20], motDePasse[20];
	if(fic == NULL)
		exit(1);
	fscanf(fic, "%s %s %s", nom, prenom, motDePasse);
	printf("%s\t %s\t %s\n", nom, prenom, motDePasse);
	while(1){
		//lettre=fgetc(fic);
		fgets(chaine, 255, fic);
		if(feof(fic))
			break;
		printf("%s", chaine);
	}
	printf("la position du curseur est %d\n", ftell(fic));
	fseek(fic , 4, SEEK_SET);
	printf("la position du curseur est %d\n", ftell(fic));
	rewind(fic);
	printf("la position du curseur est %d\n", ftell(fic));
	exit(1);
	helloGame();
	printf("Taper le nombre de joueur\n");
	scanf("%d", &n);
	tabJoueur=malloc(n*sizeof(int));
	remplirCoords(n ,tabJoueur);
	afficheCoords(n ,tabJoueur);

	free(tabJoueur);
	system("pause");
	return 0;
}  