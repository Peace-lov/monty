#include "monty.h"
/**
 * f_add - includes the top two elements of the stack.
 * @hd: stck head
 * @ct: line number
 * Return: nothing
*/
void f_add(stack_t **hd, unsigned int ct)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", ct);
		fclose(buss.files);
		fr_stack(*hd);
		exit(EXIT_FAILURE);
	}
	free(buss.contents);
	h = *hd;
	auxil = h->n + h->next->n;
	h->next->n = auxil;
	*hd = h->next;
	free(h);
}
