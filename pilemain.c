#include <stdio.h>
#include <stdlib.h>
#include "pile2.h"
int main(int argc, char const *argv[])
{
	Stack st;
	st = new_pile();
	if(is_null(st))
		printf("list vide\n");
	st=push_pile(st, "raouf");
	st=push_pile(st, "abidi");
	st=push_pile(st, "ahla");
	st=push_pile(st, "mmmm");

	if(is_null(st))
		printf("list vide\n");
	else
		printf("liste pleine\n");
	printf("longueur = %d\n", len_pile(st));
	affiche_pile(st);

	st=pop_pile(st);
	affiche_pile(st);
	printf("longueur = %d\n", len_pile(st));
	st=clear_pile(st);
	
	if(is_null(st))
		printf("list vide\n");
	else
		printf("liste pleine\n");
	system("pause");
	return 0;
}