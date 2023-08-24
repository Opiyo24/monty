#include "monty.h"
/**
 * pint - prints top value of a stack
 * @stack: tope node of t\stack
 * @line_number: line number
*/
void pint(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL)
	{
		cleaner(2, line_number);
		return;
	}
	printf("%d\n", (*stack)->next->n);
}
