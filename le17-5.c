#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Personne
{
	char nom[20];
	int  age;
} Personne;
int max(Personne *a, Personne *b){
	if (a->age > b->age){
		return 1;
	}else{
		return 0;
	}
}
int main(int argc, char const *argv[])
{
	Personne p , *Pp;
	Personne p1;
	printf("taper votre nom\n");
	gets(p.nom);
	printf("taper votre age\n");
	scanf("%d", &p.age);

	printf("taper votre nom 2\n");
	gets(p1.nom);
	printf("taper votre age 2\n");
	scanf("%d", &p1.age);
	if(max(&p, &p1)){
		Pp=&p;
	}else{
		Pp=&p1;
	}

	printf("%s\n", Pp->nom);
	/* code */
	return 0;
}