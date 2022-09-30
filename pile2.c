#include <stdio.h>
#include <stdlib.h>
#include "pile2.h"
#include <string.h>
Stack new_pile(void)
{
	return NULL;
}
Bool is_null(Stack ste)
{
	if(ste==NULL)
		return true;
	return false;
}
Stack push_pile(Stack ste, char *ch)
{
	static int n=-1;
	n++;
	StackElement *element;
	element=malloc(sizeof(*element));
	if(element==NULL)
	{
		fprintf(stderr, "%s\n", "PROBLEME DE ALLOCATION DYNAMIQUE");
		exit(1);
	}
	element->index=n;
	strcpy(element->ch, ch);
	element->Next=ste;
	return element;
}
void affiche_pile(Stack ste)
{
	if(is_null(ste)){
		printf("cette pile est vide\n");
		exit(1);
	}
	while(!is_null(ste)){
		printf("[%d => %s]\n", ste->index, ste->ch);
		ste=ste->Next;
	}
}
Stack clear_pile(Stack ste)
{
	StackElement *element;
	if(is_null(ste))
		return new_pile();
	element=ste->Next;
	free(ste);
	return clear_pile(element);
}
Stack pop_pile(Stack ste)
{
	StackElement *element;
	if(is_null(ste))
		return new_pile();
	element=ste->Next;
	free(ste);
	return element;
}
int len_pile(Stack ste)
{
	int ln=0;
	while(!is_null(ste))
	{
		ln++;
		ste=ste->Next;
	}

	return ln;
}