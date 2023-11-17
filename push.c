#include "monty.h"
/**
 * f_push - includes node to the stck
 * @hd: stck head
 * @ct: line number
 * Return: nothing
*/
void f_push(stack_t **hd, unsigned int ct)
{
	int num, flag, jn = 0;

	flag = 0;

	if (buss.args)
	{
		if (buss.args[0] == '-')
			jn++;
		while (buss.args[jn] != '\0')
		{
			if (buss.args[jn] > 57 || buss.args[jn] < 48)
				flag = 1;
			jn++;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", ct);
			fclose(buss.files);
			free(buss.contents);
			fr_stack(*hd);
			exit(EXIT_FAILURE);
		}
		else
		{
			fprintf(stderr, "L%d: usage: push integer\n", ct);
			fclose(buss.files);
			free(buss.contents);
			fr_stack(*hd);
			exit(EXIT_FAILURE);
		}
		num = atoi(buss.args);
		if (buss.lifis == 0)
			add_node(hd, num);
		else
			add_queue(hd, num);
	}
}
