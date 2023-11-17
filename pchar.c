#include "monty.h"
/**
 * f_pchar - prints the character(stack)
 * @hd: the stack head
 * @ct: line_number
 * Return: nothing
*/
void f_pchar(stack_t **hd, unsigned int ct)
{
	stack_t *head;

	head = *hd;
	if (!head)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", ct);
		fclose(buss.files);
		free(buss.contents);
		fr_stack(*hd);
		exit(EXIT_FAILURE);
	}
	if (head->n > 127 || head->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", ct);
		fclose(buss.files);
		free(buss.contents);
		fr_stack(*hd);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", head->n);
}
