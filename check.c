#include "monty.h"
/**
 * check_mode - determines stack or list
 * @stack: pointer to te top element
 *
 * Return: if stack, 0 if queue, 1
*/
int check_mode(stack_t *stack)
{
	if (stack->n == STACK)
		return(STACK);
	else if (stack->n == QUEUE)
		return(QUEUE);
	return(2);
}
