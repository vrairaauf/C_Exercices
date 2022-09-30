#ifndef __PILE2_H__
#define __PILE2_H__
typedef enum 
{
	false,
	true
}Bool;
typedef struct StackElement
{
	int index;
	char ch[100];
	struct StackElement *Next;
}StackElement, *Stack;
Stack new_pile(void);
Bool is_null(Stack ste);
Stack push_pile(Stack ste, char *ch);
void affiche_pile(Stack ste);
Stack clear_pile(Stack ste);
Stack pop_pile(Stack ste);
int len_pile(Stack ste);
#endif