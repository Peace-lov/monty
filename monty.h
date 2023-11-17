#ifndef _MONTY_H
#define _MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#include <sys/types.h>
#include <unistd.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct bus_ss - variables -arggs, file, line content
 * @args: value
 * @files: pointer to monty file
 * @contents: line content
 * @lifis: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_ss
{
	char *args;
	FILE *files;
	char *contents;
	int lifis;
}  buss_t;
extern buss_t buss;

void f_pall(stack_t **hd, unsigned int ct);
void f_push(stack_t **hd, unsigned int ct);
void f_pint(stack_t **hd, unsigned int ct);
void f_pop(stack_t **hd, unsigned int ct);
void f_swap(stack_t **hd, unsigned int ct);
void f_add(stack_t **hd, unsigned int ct);
void f_div(stack_t **hd, unsigned int ct);
void f_nop(stack_t **hd, unsigned int ct);
void f_mod(stack_t **hd, unsigned int ct);
void f_pstr(stack_t **hd, unsigned int ct);
void f_pchar(stack_t **hd, unsigned int ct);
void f_rotr(stack_t **head, unsigned int ct);
void f_rotl(stack_t **head, unsigned int ct);
void f_queue(stack_t **hd, unsigned int ct);
void f_stack(stack_t **hd, unsigned int ct);
void f_sub(stack_t **hd, unsigned int ct);
void f_mul(stack_t **hd, unsigned int ct);
void add_node(stack_t **hd, int num);
int exec(char *contents, stack_t **stck, unsigned int ct, FILE *fle);
void fr_stack(stack_t *hd);
void add_queue(stack_t **hd, int num);

#endif
