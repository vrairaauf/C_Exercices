#include <stdio.h>
#include <stdlib.h>
typedef struct Eleve
{ 
	int age; 
	int poids;
} Eleve;
int main(void){
	Eleve e={23,76};
	Eleve *Pe;
	Pe=&e;
	printf("%d\n", e.poids);
	printf("%d\n", Pe->poids);
	system("pause");
	return 0;
}
