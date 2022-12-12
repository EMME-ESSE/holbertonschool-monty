#include "monty.h"
stack_t **full_start;
/**
 * main - the root of the project
 * @argc: how many arguments were passed to a program
 * @argv: arguments vector
 *
 * Return: on scuccess, always EXIT_SUCCESS
 */
int main(int argc, char *argv[])
{
	stack_t *start;
	FILE *fp;

	if (argc != 2)
	{
		fprintf(stderr, "%s\n", "USAGE: monty file");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (!fp)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	fclose(fp);
	start = NULL;
	full_start = &start;
	read_file(argv[1], &start);
	exit(EXIT_SUCCESS);
}
