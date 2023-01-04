#include "monty.h"
/**
 * _pall - prints all the values on the stack, starting from the top of the stack
 * @stack: double pointer
 * @line_number: unsigned int
 */
void _pall(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	stack_t *aux = *stack;

	if (!stack || !(*stack))
		return;
	aux = *stack;
	while (aux)
	{
		fprintf(stdout, "%d\n", aux->n);
		aux = aux->next;
	}
}
