#include "monty.h"
/**
 * frer_stack - free stack.
 * @stack: stack_t
 *
 *
 * Return: Always 0
 */
void free_stack(stack_t *stack)
{
        stack_t *node, *temp;
        if (!stack)
                return;
        node = stack;
        while (node)
        {
                temp = node->next;
                free(node);
                node = temp;
        }
        stack = NULL;
}
