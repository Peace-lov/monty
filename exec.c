#include "monty.h"
/**
* exec - executes the opcode of the stack
* @stck: head linked list for stack
* @ct: line_counter
* @fle: poiner to monty file
* @contents: line content
* Return: nothing
*/
int exec(char *contents, stack_t **stck, unsigned int ct, FILE *fle)
{
	instruction_t opst[] = {
				{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
				{"pop", f_pop}, {"swap", f_swap},
				{"add", f_add}, {"nop", f_nop},
				{"sub", f_sub}, {"div", f_div},
				{"mul", f_mul}, {"mod", f_mod},
				{"pchar", f_pchar}, {"pstr", f_pstr},
				{"rotl", f_rotl}, {"rotr", f_rotr},
				{"queue", f_queue}, {"stack", f_stack}, {NULL, NULL}
				};
	unsigned int j = 0;
	char *opt;

	opt = strtok(contents, " \n\t");
	if (opt && opt[0] == '#')
		return (0);
	buss.args = strtok(NULL, " \n\t");
	while (opst[j].opcode && opt)
	{
		if (strcmp(opt, opst[j].opcode) == 0)
		{	opst[j].f(stck, ct);
			return (0);
		}
		j++;
	}
	if (opt && opst[j].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", ct, opt);
		fclose(fle);
		free(contents);
		fr_stack(*stck);
		exit(EXIT_FAILURE);
	}
	return (1);
}
