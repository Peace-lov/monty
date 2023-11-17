#include "monty.h"
/**
 * f_mul - multiplies the top 2 elements of the stack
 * @hd: the stack head
 * @ct: line number
 * Return: nothing
 */
void f_mul(stack_t **hd, unsigned int ct)
{
	stack_t *h;
	int l = 0;
	int auxil;

	h = *hd;
	for (; h; l++)
	{
		h = h->next;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", ct);
		fclose(buss.files);
		free(buss.contents);
		fr_stack(*hd);
		exit(EXIT_FAILURE);
	}
	h = *hd;
	auxil = h->next->n * h->n;
	h->next->n = auxil;
	*hd = h->next;
	free(h);
}
