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
	int i;

	new_node = (stack_t)malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return(EXIT_FAILURE);
	}

	if (op_toks[1] == NULL)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		return(EXIT_FAILURE):
	}
	for (i = 0; op_toks[1][i]; i++)
	{
		if (op_toks[1][i] == '-' && i == 0)
			continue;
		if (op_tok[1][i] < '0' || op_toks[1][i] > '9')
		{
			fprintf(stderr, "L%u: usage: push integer\n", line_number);
			return(EXIT_FAILURE);
		}
	}
	new_node->n = atoi(op_toks[1]);

	if (check_mode(*stack) == STACK)
	{
		temp = (*stack)->next;
		new_node->prev = *stack;
		new_node->next = temp;

		if (temp)
		{
			temp->prev = new_node;
		}
		(*stack)->next - new_node;
	}
	else
	{
		temp = *stack;
		while (temp->next)
		{
			temp = temp->next;
		}
		new_node->prev = temp;
		new_node->next = NULL;
		temp->next = new_node;
	}
}