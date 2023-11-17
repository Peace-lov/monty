#include "monty.h"
/**
  *f_rotr - rotates the stack to the bottom of the stack
  *@head: the stack head
  *@ct: line number
  *Return: nothing
 */
void f_rotr(stack_t **head, unsigned int ct)
{
	stack_t *cpy;
	(void)ct;

	cpy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (cpy->next)
	{
		cpy = cpy->next;
	}
	cpy->next = *head;
	cpy->prev->next = NULL;
	cpy->prev = NULL;
	(*head)->prev = cpy;
	(*head) = cpy;
}

