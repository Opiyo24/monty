#include "monty.h"
/**
 * pop - removes top element of a stack
 * @stack: pointer to firsl e,]lement of stack
 * @line_number: current line
*/
void pop(stack_t **stack, unsigned int line_number)
{
	stack->next = NULL;

	if ((*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		return(EXIT_FAILURE);/*return;*/
	}

	next = (*stack)->next->next;
	free((*stack)->next);
	if (bext)
	{
		next->prev = *stack;
	}
	(*stack)->next = next;
}
