#include "monty.h"
/**
 * f_swap - includes the top two elements of the stack.
 * @hd: stack head
 * @ct: line number
 * Return: nothing
*/
void f_swap(stack_t **hd, unsigned int ct)
{
	stack_t *h;
	int l = 0, auxil;

	h = *hd;
	for (; h; l++)
	{
		h = h->next;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", ct);
		fclose(buss.files);
		free(buss.contents);
		fr_stack(*hd);
		exit(EXIT_FAILURE);
	}
	h = *hd;
	auxil = h->n;
	h->n = h->next->n;
	h->next->n = auxil;
}
