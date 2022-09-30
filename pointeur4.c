#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
	char c,*pc;
	char chaine[]="une chain e de caractere";
	printf("taper un caracter \n");
	scanf("%c", &c);
	pc=&c;
	if(strchr(chaine, *pc)){
		printf("%s \n", chaine);
	}else{
		printf("aucune chaine contient ce caractere\n");
	}
		
	
	return 0;
}