#include <stdio.h>
#include <stdlib.h>
#include "stuck2.h"
int main(int argc, char const *argv[])
{
	Stack sta=new_stack();
	if (is_null(sta))
		printf("la pile est vide\n");
 
	sta=push_stack(sta, 12);
	sta=push_stack(sta, 21);
	sta=push_stack(sta, 32);

	if (is_null(sta))
		printf("la pile est vide\n");
	else
		printf("la pile contient des elements\n");

	sta=affiche_stack(sta);
	
	return 0;
}