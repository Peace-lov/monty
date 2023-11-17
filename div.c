#include "monty.h"
/**
 * f_div - div the top 2 elements of the stack.
 * @hd: the stack head
 * @ct: line number
 * Return: nothing
*/
void f_div(stack_t **hd, unsigned int ct)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", ct);
		fclose(buss.files);
		fr_stack(*hd);
		exit(EXIT_FAILURE);
	}
	h = *hd;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", ct);
		fclose(buss.files);
		fr_stack(*hd);
		exit(EXIT_FAILURE);
	}
	free(buss.contents);
	auxil = h->next->n / h->n;
	h->next->n = auxil;
	*hd = h->next;
	free(h);
}
