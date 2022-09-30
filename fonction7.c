#include <stdio.h>
#include <stdlib.h>
void permuter(int *pc, int *ptj){
	int tmp;
	tmp=*pc;
	*pc=*ptj;
	*ptj=tmp;
}
void trie(int tab[], char ordre[]){
	ordre="asc";
	int i,j;
	int courant;
	if(ordre=="asc"){
		for(i=0; tab[i];i++){
			courant=tab[i];
			for(j=i+1; tab[j]; j++){
				if(courant>tab[j]){
					permuter(tab+i, tab+j);
				}
			}
		}
	}
}
int main(void){
	int tab[10]={1,2,7,3,1};
	int i;
	printf("avant trie \n");
	for(i=0; tab[i]; i++){
		printf("%d \n", tab[i]);
	}
	printf("apres trie \n");
	trie(tab, "asc");
	for(i=0; tab[i]; i++){
		printf("%d \n", tab[i]);
	}
	return 0;
}