#include "monty.h"
/**
 * pint - prints top value of a stack
 * @stack: tope node of t\stack
 * @line_number: line number
*/
void pint(stack_t **stack, unsigned in line_number)
{
	if ((*stack)->next == NULL)
	{
		fprintf(stderr, "'%d: can't pint, stack empty\n", line_number);
		return;
	}
	printf("%d\n", (*stack)->next->n);
}
