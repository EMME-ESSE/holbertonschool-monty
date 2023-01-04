#include "monty.h"
/**
 * _push - pushes an element to the stack
 * @stack: double pointer
 * @line_number: unsigned int
 */
void _push(stack_t **stack, unsigned int line_number)
{
	int num = atoi(strtok(NULL, " \n"));

	stack_t *node = NULL;
	stack_t *ptr = *stack;

	if (!stack)
	{
		fprintf(stderr, "Error: malloc failed on line: %d\n", line_number);
		return;
	}
	node = malloc(sizeof(stack_t));
	if (!node)
	{
		fprintf(stderr, "malloc failed\n");
		exit(EXIT_FAILURE);
	}
	
	node->n = num;
	node->next = NULL;
	node->prev = NULL;
	if (!*stack)
		*stack = node;
	if (ptr)
	{
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = node;
		node->prev = ptr;
	}
}
