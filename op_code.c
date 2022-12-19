#include "monty.h"
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
int get_op(const char *opcode)
{
        for (int i = 0; ops[i].opcode; i++)
        {
                if (!strcmp(opcode, ops[i].opcode))
                {
                        return i;
                }
        }
        return -1;
}
