#include <stdio.h>
#include <stdlib.h>
int somme(int a, int b){
	return a+b;
}
int main(void){
	int a=9,b=9;
	int some;
	some=somme(a,b);
	printf("la somme de %d + %d est de \n %d \n", a, b, some);

	return 0;
}