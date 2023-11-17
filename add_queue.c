#include "monty.h"
/**
 * add_queue - adds node to the tail stack
 * @num: new value
 * @hd: the stack head
 * Return: nothing
*/
void add_queue(stack_t **hd, int num)
{
	stack_t *nwnod, *auxil;

	auxil = *hd;
	nwnod = malloc(sizeof(stack_t));
	if (nwnod == NULL)
	{
		printf("Error\n");
	}
	nwnod->n = num;
	nwnod->next = NULL;
	if (auxil)
	{
		while (auxil->next)
			auxil = auxil->next;
	}
	if (!auxil)
	{
		*hd = nwnod;
		nwnod->prev = NULL;
	}
	else
	{
		auxil->next = nwnod;
		nwnod->prev = auxil;
	}
}
