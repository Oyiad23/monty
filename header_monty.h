#ifndef HEADER_MONTY_H
#define HEADER_MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

#include <unistd.h>

#define STACK 0
#define QUEUE 1
#define DELIMS " \n\t\a\b"

extern char **op_toks;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
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
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void free_stack(stack_t **stack);
int init_stack(stack_t **stack);
int check_mode(stack_t *stack);
void free_tokens(void);
unsigned int token_arr_len(void);
int run_monty(FILE *script_fd);
void set_op_tok_error(int error_code);

void monty_push(stack_t **stack, unsigned int line_number);
void monty_pall(stack_t **stack, unsigned int line_number);
void monty_pint(stack_t **stack, unsigned int line_number);
void monty_pop(stack_t **stack, unsigned int line_number);
void monty_swap(stack_t **stack, unsigned int line_number);
void monty_addition(stack_t **stack, unsigned int line_number);
void monty_sl(stack_t **stack, unsigned int line_number);
void monty_subtraction(stack_t **stack, unsigned int line_number);
void monty_divide(stack_t **stack, unsigned int line_number);
void monty_multiplication(stack_t **stack, unsigned int line_number);
void monty_modula(stack_t **stack, unsigned int line_number);
void monty_wchar(stack_t **stack, unsigned int line_number);
void monty_sul(stack_t **stack, unsigned int line_number);
void monty_ssul(stack_t **stack, unsigned int line_number);
void monty_stul(stack_t **stack, unsigned int line_number);
void monty_stackline(stack_t **stack, unsigned int line_number);
void monty_line(stack_t **stack, unsigned int line_number);

char **strtow(char *str, char *delims);
char *get_int(int n);


int usage_err(void);
int malloc_err(void);
int file_open_err(char *filename);
int unrec_oper_err(char *opcode, unsigned int line_number);
int no_int_error(unsigned int line_number);
int pop_error(unsigned int line_number);
int pint_error(unsigned int line_number);
int short_stack_error(unsigned int line_number, char *op);
int div_error(unsigned int line_number);
int pchar_error(unsigned int line_number, char *message);



#endif /* HEADER_MONTY_H */

