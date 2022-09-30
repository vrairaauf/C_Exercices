#include <stdio.h>
#include <stdlib.h>
#include "stuck2.h"
Stack new_stack(void)
{ 
	return NULL;
}
Stack push_stack(Stack st, int id)
{
	StackElement *element;
	element=malloc(sizeof(*element));
	if(element==NULL){
		fprintf(stderr, "%s\n", "UNE PROBLEME LORS DE LALLOCTION DYNAMIQUE");
		exit(EXIT_FAILURE);
	}
	element->id=id;
	element->Next=st;
	return element;
}
Bool is_null(Stack st)
{
	if(st==NULL)
		return true;
	return false;
}
Stack affiche_stack(Stack st)
{
	if (is_null(st)){
		printf("ce stack est vide\n");
		exit(EXIT_FAILURE);
	}
	while(!is_null(st)){
		printf("[%d]\n", st->id);
		st=st->Next;
	}
}
