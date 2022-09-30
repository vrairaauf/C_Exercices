#include <stdio.h>
#include <stdlib.h>
int main(void){
	FILE *image=fopen("https://roma-interieur.com/", "rb");
	//system("start http://roma-interieur.com/");
	char ligne[255];
	fgets(ligne, 255, image);
		printf("%s\n", ligne);
		fgets(ligne, 255, image);
		printf("%s\n", ligne);
		fgets(ligne, 255, image);
		printf("%s\n", ligne);
	/*while(!feof(image)){
		printf("le programme est ici\n");
		fgets(ligne, 255, image);
		printf("%s\n", ligne);
	}*/
	
	system("pause");
	return 0;
}