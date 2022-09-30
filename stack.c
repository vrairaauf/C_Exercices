#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
Stack new_stack(void){
	return NULL; 
}
Stack push_stack(Stack st, int value){
	StackElement *element;
	element=malloc(sizeof(*element));
	if (element==NULL)
	{
		fprintf(stderr, "%s\n", "un erreur de lallocation de memoire");
		exit(EXIT_FAILURE);
	}
	element->value=value;
	element->next=st;
	return element;
}
Bool is_null(Stack st){
	if (st==NULL)
		return true;

	return false;
}
Stack clear_stack(Stack st)
{
	StackElement *element;
	if (is_null(st))
		return new_stack();
	element=st->next;
	free(st);
	return clear_stack(element);
}
Stack affiche_stack(Stack st)
{	
	StackElement *element;
	if (is_null(st)){
		printf("ce stack est vide\n");
		exit(EXIT_FAILURE);
	}
	while(!is_null(st)){
		printf("[%d]\n", st->value);
		st=st->next;
	}


}