#include "monty.h"
/**
 * f_mod - computes the rest of the division of the second
 * @hd: the stack head
 * @ct: line number
 * Return: nothing
*/
void f_mod(stack_t **hd, unsigned int ct)
{
	stack_t *h;
	int l = 0, auxil;

	h = *hd;
	for (; h; l++)
	{
		h = h->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", ct);
		fclose(buss.files);
		free(buss.contents);
		fr_stack(*hd);
		exit(EXIT_FAILURE);
	}
	h = *hd;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", ct);
		fclose(buss.files);
		free(buss.contents);
		fr_stack(*hd);
		exit(EXIT_FAILURE);
	}
	auxil = h->next->n % h->n;
	h->next->n = auxil;
	*hd = h->next;
	free(h);
}
