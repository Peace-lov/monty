#include "monty.h"
/**
* fr_stack - frees a doubly linked list of stack
* @hd: the stack head
*/
void fr_stack(stack_t *hd)
{
	stack_t *auxil;

	auxil = hd;
	while (hd)
	{
		auxil = hd->next;
		free(hd);
		hd = auxil;
	}
}
