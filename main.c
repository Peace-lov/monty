#include "monty.h"
#include <stdio.h>
buss_t buss = {NULL, NULL, NULL, 0};
/**
* main - monty code interpreter for stack
* @argc: arguments count
* @argv: arguments vector
* Return: 0
*/
int main(int argc, char *argv[])
{
	stack_t *stck = NULL;
	FILE *fle;
	char contents[256];
	unsigned int ct = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fle = fopen(argv[1], "r");
	buss.files = fle;
	if (!fle)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (fgets(contents, sizeof(contents), fle) != NULL)
	{
		buss.contents = contents;
		exec(contents, &stck, ct, fle);
	}
	fr_stack(stck);
	fclose(fle);
	return (0);
}
