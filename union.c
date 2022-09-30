#include <stdio.h>
#include <stdlib.h>
union Nombre{
	int entier;
	float decimal;
};
int main(void){
	union Nombre donne;
	int n;
	float f;
	
	f=donne.decimal=67.800;
	
	printf("le decimal contient %.2f\n", f);
	system("pause");
 
	return 0;
}