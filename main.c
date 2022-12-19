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
	FILE *fp;
	char *line = NULL;
	size_t len = 0;

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
	line = malloc(sizeof(char) * 3);
	if (!line)
	{
		free(line);
		return (0);
	}
	while ((getline(&line, &len, fp)) != -1)
	{
		printf("%s", line);
	}
	fclose(fp);
	exit(EXIT_SUCCESS);
}
