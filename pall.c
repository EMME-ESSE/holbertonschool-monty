#include "monty.h"
/**
 * _pall - prints all the values on the stack, starting from the top of the stack
 * @stack: double pointer
 * @line_number: unsigned int
 */
void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *go = NULL;


	if (!stack)
	{
		fprintf(stderr, "L%d: unknown instruction\n", line_number);
		return (EXIT_FAILURE);
	}
	if (stack)
		cursor = *stack;

	while (go)
	{
		printf("%d\n", go->n);
		go = go->next;
	}
}
