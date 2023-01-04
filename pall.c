#include "monty.h"
/**
 * _pall - prints all the values on the stack, starting from the top of the stack
 * @stack: double pointer
 * @line_number: unsigned int
 */
void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *cursor = NULL;


	if (!stack)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, token);
		return (EXIT_FAILURE);
	}
	if (head)
		cursor = *head;

	while (cursor)
	{
		printf("%d\n", cursor->n);
		cursor = cursor->next;
	}
}
