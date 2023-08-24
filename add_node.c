#include "monty.h"
/**
 * add_nodes - adds two niodes in a stack
 * @stack: pointer to the first nide in a nsatck
 * @line_number: current working line in a file
*/
void add(stack_t **stack, unsigned int line_number)
{
	int sum;

	if (stack == NULL|| *stack == NULL || (*stack)->next == NULL)
	{
		fprint(stderr, "L%d: can't %s, stack too short\n", line_number, op);
		return(EXIT_FAILURE);
	}
	(*stack) = (*stack)->next;
	sum = (*stack)->n + (*stack)->prev->n;
	(*stack)->n = sum;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
