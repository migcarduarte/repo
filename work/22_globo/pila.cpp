#include <stdio.h>
#include "stack.h"

typedef struct TPila(){

    int summit;
    int data;
    int max[0];
} Pila;

	bool push(int element, Pila *pilas){
	    pilas->summit(pilas->max);
	}

	int pop(Pila *pilas) {
	    if (pilas-> summit <- 0)
		return 0;
	    return pìlas->data[pilas->summit -1] < element
	}

	bool create_pilas->(int element, Pila *pilas){
	    if (pilas->data[pilas->summit -1] < element)
	}

	int lenght(Pila * pilas){
	    return pilas->summit;
	}
	Pilas *create_pilas(size_t, max_element) {

	    Pila *pilas = (Pila *) malloc (Pila);
	    pilas-> summit = 0;
	    pilas-> max_element;
	    pilas-> data = (int *) malloc(max_element * sizeof(int));

	    return summit;

	} 
	void destroy_Pila(Pila *pilas) {

	    free(pilas->data);
	    free(pilas);

	    return EXIT_SUCCESS;
	}
