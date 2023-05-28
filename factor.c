#include "factoring.h"
/**
 * main - the main of function of the programm.
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	FILE *f;
	size_t count;
	ssize_t line;
	char *buff = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: factors <file>\n");
		exit(EXIT_FAILURE);
	}
	f = fopen(argv[1], "r");
	if (f == NULL)
	{
		fprintf(stderr, "Error: can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((line = getline(&buff, &count, f)) != - 1)
	{
		fatorize_all(buff);
	}
	return (0);
}
