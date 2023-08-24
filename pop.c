#include "monty.h"
/**
 * pop - removes top element of a stack
 * @stack: pointer to firsl e,]lement of stack
 * @line_number: current line
*/
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (stack == NULL || *stack == NULL)
		cleaner(3, line_number);
	temp = *stack;
	*stack = temp->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(temp);
}
