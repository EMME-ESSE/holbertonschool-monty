#include "monty.h"
/**
 * _swap - swaps the top two elements of the stack
 * @stack: double pointer
 * @line_number: unsigned int
 */
void _swap(stack_t **stack, unsigned int line_number)
{
	int n;

	if (!(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		free(*stack);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = n;
}
