#include "monty.h"
void (*get_op(char *s))(stack_t **stack, unsigned int line_number)
{
	instruction_t ops[] = {
        {"push", _push},
        {"pall", _pall},
        {"pint", _pint},
        {"pop", _pop},
        {"swap", _swap},
        {"add", _add},
        {"nop", _nop},
        {NULL, NULL}
	};
	int i = 0;

	while (ops[i].opcode)
	{
		if (strcmp(ops[i].opcode, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
