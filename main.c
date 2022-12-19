#include "monty.h"
/**
 * main - entry point.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
  stack_t **stack = NULL;
  char *line = NULL;
  size_t len = 0;
  unsigned int line_number = 0;
  FILE *fp;
  int op;

  if (argc != 2)
  {
    fprintf(stderr, "USAGE: %s file\n", argv[0]);
    return EXIT_FAILURE;
  }
  fp = fopen(argv[1], "r");
  if (!fp)
  {
    fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
    return EXIT_FAILURE;
  }
  while (getline(&line, &len, fp) != -1)
  {
    char *opcode;
    line_number++;
    opcode = strtok(line, " \t\n");
    if (!opcode || opcode[0] == '#')
      continue;
    op = get_op(opcode);
    if (op < 0 || !op[opcode])
    {
      fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
      free_stack(stack);
      free(line);
      fclose(fp);
      return EXIT_FAILURE;
    }
    return (op[opcode]);
  }
  free_stack(stack);
  free(line);
  fclose(fp);
  return EXIT_SUCCESS;
}
