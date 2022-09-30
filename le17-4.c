#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char chaine[]="raouf abidi", c, *P;
	char sch[100];
	printf("taper une chaine de caractere\n");
	gets(sch);
	printf("taper un caracter\n");
	scanf("%c", &c);
	P=strchr(sch, c);
	printf("____________________________\n");
	if (P==NULL){
		printf("cette caracter ,existe pas\n");
	}else{
		if(P==sch){
			for(;P<sch+strlen(sch); P++){
				printf("%C\n", *P);
			}
		}else{
			printf("il n'ya pas dune chaine de caracter commence par cette caractere \n");
		}
	}
	
	return 0;
}