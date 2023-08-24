#include "monty.h"
/**
 * cleaner - error handling function
 * @code: error code to handle
*/
int cleaner(int error_code)
{
	va_list args;
	va_start(args, error_code);

	switch (error_code)
	{
		case 1:
			fprint(stderr, "L%d: can't %s, stack too short\n", line_number, op);
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
		default:
			break;
	}
	va_end(args);
	exit(EXIT_FAILURE)
}
