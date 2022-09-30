#include <stdio.h>
#include "player.h"
#define CODE 12
int BigScore=20; 
void helloGame(void){
	printf("Game Started\n");
}
int reinitialiserScore(void){
	BigScore=0;
}
void afficherScore(void){
	printf("%d\n", BigScore);
}

void remplirCoords(int n,int *tab){
	int cmp;
	for(cmp=0; cmp<n; cmp++){
		tab[cmp]=cmp+1;
	}
}
void afficheCoords(int n,int *tab){
	int cmp;
	for(cmp=0; cmp<n; cmp++){
		printf("PLAYER \t :%d\n", tab[cmp]);
	}
}