#include "monty.h"
stack_t *head = NULL;
/**
 * main - driver code
 * @argc: argument count
 * @argv: argument vector
*/
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	open_file(argv[1]);
	free_nodes();
	return(0);
}
