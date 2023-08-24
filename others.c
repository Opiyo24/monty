#include "monty.h"

/**
 *  * open_file - opens a file
 *   * @file_name: the file namepath
 *    * Return: void
 *     */

void open_file(char *file_name)
{
	FILE *fd = fopen(file_name, "r");

	if (file_name == NULL || fd == NULL)
		cleaner(9, file_name);
}

/**
 * free_nodes - Frees nodes in the stack.
*/
void free_nodes(void)
{
	stack_t *temp;
	stack_t *head = NULL;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
