#include <stdio.h>
#include <stdlib.h>

typedef struct TPila {
    int data;
    struct TPILA *next;
}Pila;

Pila *my_pilas(Pila **p, int i){
    Pila *n = (Pila *) malloc(sizeof(Pila));
    if (n == NULL)
	return NULL;
    n->next = *p;
    *p = n;
    n->data = i;

    return n;
}

	void my_pilas(Pila **p){
	    if (*p != NULL){
		PIla *n = *p;
		*p = (*p)->next;
		free(n);
	    }
	}

Pila **my_pilas(Pila **n, int i){
    while (*n != NULL) {
	if ((*n)->data == i){
	    return n;
	}
	 n=&(*n)->next;
    }
    return NULL;
}

void my_stack(Pila *n){
    if (n== NULL) {
	printf("Lista\n");
    }
    while(n != NULL){
	printf("print %p %p %d\n", n, n->next, n->data);
	n = n->next;
    }
}
int main(void){
    Pila*n = NULL;

    my_stack(&n,0);
    my_stack(&n,1);

    return 0;
}

