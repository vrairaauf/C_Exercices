#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	/* code */
	int tab[10]={3, 3};
	int *Ptab, somme=0;
	for(Ptab=tab; *Ptab; Ptab++){
		printf("%d\n", *Ptab);
		somme+=*Ptab;
	}
	printf("%d\n", somme);
	return 0;
}