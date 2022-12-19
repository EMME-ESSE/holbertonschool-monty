#include "monty.h"
/**
 * _push - pushes an element to the stack
 * @stack: double pointer
 * @line_number: unsigned int
 */
void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;
	char *integer;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	return;

	integer = strtok(NULL, " ");
	if (integer == NULL)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
	}

	new->n = line_number;
	new->next = *stack;
	new->prev = NULL;
	if (*stack != NULL)
		(*stack)->prev = new;
	*stack = new;
}
