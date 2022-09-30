#include <stdio.h>
#include <stdlib.h>
void insere(int tab[], int position, int element){
	int i,j;
	position--;
	for(i=0;tab[i];i++);

	i--;
	for(j=i; j>=position; j--){
		tab[j+1]=tab[j];
	}
	tab[position]=element;
	
}
int main(void){
	int tab[20]={1,2,3,4,5,6};
	int i;
	for(i=0;tab[i];i++){
		printf("%d\n", tab[i]);
	}
	insere(tab, 2, 10);
	printf("apres insertion\n");
	printf("__________________\n");
	for(i=0;tab[i];i++){
		printf("%d\n", tab[i]);
	}
	return 0;



}