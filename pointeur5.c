#include<stdio.h>
#include<stdlib.h>
struct personne{
	char nom[20];
	char prenom[20];
	int age;
};
int main(void){
	
	struct personne a,b;
	struct personne *P;
	printf("donner le nom de la personne A :");
	scanf("%s", a.nom);
	printf("donner le prenom de la personne A :");
	scanf("%s", a.prenom);
	printf("donner lage de la personne A :");
	scanf("%d", &a.age);
	printf("trararar");
	printf("donner le nom de la personne B :");
	scanf("%s", b.nom);
	printf("donner le prenom de la personne B :");
	scanf("%s", b.prenom);
	printf("donner lage de la personne B :");
	scanf("%d", &b.age);
	if (a.age<b.age){
		P=&a;
	}else{
		P=&b;
	}
	printf("la moins agee est %s \n %s \n ", (*P).nom, (*P).prenom);
	return 0;
	
	
	
}