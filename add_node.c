#include "monty.h"
/**
 * add_node - adds node to the of head stack
 * @hd: the stack head
 * @num: new value
 * Return: nothing
*/
void add_node(stack_t **hd, int num)
{

	stack_t *nwnod, *auxil;

	auxil = *hd;
	nwnod = malloc(sizeof(stack_t));
	if (nwnod == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (auxil)
		auxil->prev = nwnod;
	nwnod->n = num;
	nwnod->next = *hd;
	nwnod->prev = NULL;
	*hd = nwnod;
}
