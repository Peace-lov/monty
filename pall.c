#include "monty.h"

/**
 * f_pall - prints the sck sck = stack
 * @hd: sck hd
 * @ct: no used
 * Return: no return
*/
void f_pall(stack_t **hd, unsigned int ct)
{
	stack_t *h;
	(void)ct;

	h = *hd;

	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}

