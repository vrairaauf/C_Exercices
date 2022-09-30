#include<stdio.h>
#include <stdlib.h>
void permuter(int *Pn1, int *Pn2, int *Pn3){
	int tmp;
	tmp=*Pn1;
	*Pn1=*Pn2;
	*Pn2=*Pn3;
	*Pn3=tmp;
}
int main(void){

	int a,b,c;
printf("taper 3 nombe entier\n");
scanf("%d/%d/%d", &a, &b, &c);
printf("avant l'opération de permutation \n");
printf("a=%d \nb=%d\nc=%d\n", a, b, c);
permuter(&a, &b, &c);
printf("apres l'opération de permutation\n");
printf("a=%d\nb=%d\nc=%d\n", a,b,c);
printf("le code asci de a= %d\n", 'a'),
system("pause");
	return 0;
}