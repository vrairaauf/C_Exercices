#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main(void){
	char chaine[]="ragar";
	char *Pd,*Pf;

	Pd=chaine;
	Pf=chaine+4;
	while(Pd<Pf){
		if(*Pd==*Pf){
			Pd++;
			Pf--;
		}
		else{
			break;
		}
	}
	if (Pd>=Pf){
		printf("une chaine palindrome\n");
	}else{
		printf("ce nest pas une chaine palindroem\n");
	}
	
	return 0;

}