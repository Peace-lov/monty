#include "monty.h"
/**
 * f_sub- removes node from stack
 * @hd: the stck head
 * @ct: line_number
 * Return: nothing
 */
void f_sub(stack_t **hd, unsigned int ct)
{
	stack_t *auxil;
	int sub, nod;

	auxil = *hd;
	for (nod = 0; auxil != NULL; nod++)
		auxil = auxil->next;
	if (nod < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", ct);
		fclose(buss.files);
		free(buss.contents);
		fr_stack(*hd);
		exit(EXIT_FAILURE);
	}
	auxil = *hd;
	sub = auxil->next->n - auxil->n;
	auxil->next->n = sub;
	*hd = auxil->next;
	free(auxil);
}

