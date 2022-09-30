#ifndef __STACK__H__
#define __STACK__H__

	typedef enum {
		false,
		true
	}Bool;
	typedef struct StackElement
	{
		int value;
		struct StackElement *next; 
	}StackElement, *Stack;

	Stack new_stack(void);
	Stack push_stack(Stack st, int value);
	Bool is_null(Stack st);
	Stack clear_stack(Stack st);
	Stack affiche_stack(Stack st);
#endif