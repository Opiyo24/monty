#include "monty.h"
/**
 * push - adds an element to the top of the stack
 * @stack: pointer to the top node pf the stack
 * @line_number: line number pof file
*/

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	stack_t *new_node;
	stack_t *head;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		exit(EXIT_FAILURE);
	if (*stack == NULL)
	{
		new_node->next = NULL;
		new_nde->prev = NULL;
		*stack = new_node;
	}
	temp = *stack;
	new_node->next = temp;
	new_node->prev = NULL;
	temp->prev = new_node;
	*stack = new_node
}
/**
 * pall - displays the values of a stack
 * @stack: a stack
 * @line_number: line number
*/
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = (*stack)->next;

while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	cleaner(6);
	(void)(line_number);
	return;
}
