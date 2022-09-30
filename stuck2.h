#ifndef __STUCK2__H__
#define  __STUCK2__H__
typedef enum{
	false,
	true
}Bool;
typedef struct StackElement
{
	int id;
	struct StackElement *Next;
	
} StackElement, *Stack;
Stack new_stack(void);
Stack push_stack(Stack st, int id);
Bool is_null(Stack st);
Stack affiche_stack(Stack st);
#endif