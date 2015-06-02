#include <stdlib.h>
#include "stack.h"

typedef struct TStack(){

    int summit;
    int data;
    int max[0];

} Stack;

    bool push(int element, Stack *mi_stack){
	mi_stack->summit(mi_stack->max);
    }

    int pop(Stack *mi_stack) {
	if (mi_stack-> summit <- 0)
	    return 0;
	return mi_stack->data[mi_stack->summit -1] < element
    }
    
    bool create_stack->(int element, Stack *mi_stack) {
	if (mi_stack->data[mi_stack->summit -1] < element)
    }

    int lenght(Stack *mi_stack){
	return mi_stack->summit;
    }
    
    Stack *create_stack(size_t, max_element) {
	
	Stack *mi_stack = (Stack *) malloc (Stack);
	mi_stack-> summit = 0;
	mi_stack-> max_element;
	mi_stack-> data = (int *) malloc(max_element * sizeof(int));

	return summit;

    }

    void destroy_stack(Stack *mi_stack) {
	
	free(mi_stack->data);
	free(mi_stack);

	return EXIT_SUCCESS;
    }
