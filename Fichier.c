#include <stdio.h>
#include <stdlib.h>
int main(void){
	FILE *fic = fopen("raouf.data", "r");
	char texte[256];
	if (fic==NULL)
		exit(1);
	while(fgets(texte, 255, fic)!=NULL)
		printf("%s\n", texte);
	system("pause");
	return 0;
}