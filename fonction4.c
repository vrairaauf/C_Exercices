#include<stdio.h>
#include<stdlib.h>
int fcarre(int n){
	return n*n;
}
void affiche_carra(int tab[]){
	int i=0;
	int carre;
	for(i=0; tab[i];i++){
		carre=fcarre(tab[i]);
		printf("la racine carre de %d element du tableaus %d = %d \n", i, tab[i], carre);
	}
}
int main(void){
	int tab[5]={1,3,5,7};
	affiche_carra(tab);

	return 0;
}