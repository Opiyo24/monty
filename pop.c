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
		cleaner(3,line_number);
		return;
	}

	stack->next = (*stack)->next->next;
	free((*stack)->next);
	if (stack->next)
	{
		next->prev = *stack;
	}
	(*stack)->next = next;
}
