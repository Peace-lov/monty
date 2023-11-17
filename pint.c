#include "monty.h"
/**
 * f_pint - prints the top of the stack
 * @hd: the stacks head
 * @ct: line number
 * Return: nothing
 */
void f_pint(stack_t **hd, unsigned int ct)
{
	if (*hd == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", ct);
		fclose(buss.files);
		free(buss.contents);
		fr_stack(*hd);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*hd)->n);
}
