#include <readline/readline.h>
#include <readline/history.h>

int main(int argc, char *argv[]) {
    
    char *line;

    line = readline("Dime tu nombre: ");
    printf("Y te hare reina"
	    "de un jardin de rosas, %s\n", line);

	free(line);
	return EXIT_SUCCESS;
}
