#include "monty.h"
/**
 * f_pop - prints the top of the stack
 * @hd: the stack head
 * @ct: line_number
 * Return: nothing
*/
void f_pop(stack_t **hd, unsigned int ct)
{
	stack_t *h;

	if (*hd == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", ct);
		fclose(buss.files);
		free(buss.contents);
		fr_stack(*hd);
		exit(EXIT_FAILURE);
	}
	h = *hd;
	*hd = h->next;
	free(h);
}
