#include "monty.h"
/**
 * cleaner - error handling function
 * @code: error code to handle
*/
int cleaner(int error_code, ...)
{
	va_list ag;
	char *op;
	int line_number;

	va_start(ag, error_code);
	line_number = va_arg(ag, unsigned int);

	switch (error_code)
	{
		case 1:
			op = va_arg(ag, char *);
			fprintf(stderr, "L%d: can't %s, stack too short\n", line_number, op);
			break;
		case 2:
			fprintf(stderr, "'%d: can't pint, stack empty\n", line_number);
			break;
		case 3:
			fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
			break;
		case 4:
			fprintf(stderr, "Error: malloc failed\n");
			break;
		case 5:
			fprintf(stderr, "L%u: usage: push integer\n", line_number);
			break;
		case 6:
			fprintf(stderr, "Stack underflow\n");
			break;
		case 9:
			fprintf(stderr, "Error: can't open file %s\n", va_arg(ag, char *));
			break;
		default:
			break;
	}
	va_end(ag);
	exit(EXIT_FAILURE);
}
