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

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return;
	}

	if (op_toks[1] == NULL)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		return;
	}
	for (i = 0; op_toks[1][i]; i++)
	{
		if (op_toks[1][i] == '-' && i == 0)
			continue;
		if (op_toks[1][i] < '0' || op_toks[1][i] > '9')
		{
			fprintf(stderr, "L%u: usage: push integer\n", line_number);
			return;
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
		(*stack)->next = new_node;
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
	fprintf(stderr, "Stack underflow\n");
	void (line_number);
}
