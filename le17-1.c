#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int n1,n2,somme;
	int *Pn1,*Pn2;
	printf("taper deux entier pour valculer leur sommes \n");
	scanf("%d+%d", &n1, &n2);
	Pn1=&n1;Pn2=&n2;
	somme=*Pn1+*Pn2;
	printf("la somme est de %d \n", somme);
	return 0;
}