#include "monty.h"
/**
 * f_pstr - prints the string starting from the top
 * @hd: the stack head
 * @ct: line number
 * Return: nothing
*/
void f_pstr(stack_t **hd, unsigned int ct)
{
	stack_t *head;
	(void)ct;

	head = *hd;
	while (head)
	{
		if (head->n > 127 || head->n <= 0)
		{
			break;
		}
		printf("%c", head->n);
		head = head->next;
	}
	printf("\n");
}
