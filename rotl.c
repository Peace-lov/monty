#include "monty.h"
/**
  *f_rotl- rotates the stack to the top of the stack
  *@head: the stack head
  *@ct: line number
  *Return: nothing
 */
void f_rotl(stack_t **head, unsigned int ct)
{
	stack_t *temp = *head, *auxil;
	(void)ct;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	auxil = (*head)->next;
	auxil->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = auxil;
}
