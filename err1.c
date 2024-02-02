#include "header_monty.h"

int usage_err(void);
int malloc_err(void);
int file_open_err(char *filename);
int unrec_oper_err(char *opcode, unsigned int line_number);
int no_int_error(unsigned int line_number);

/**
 * usage_err - Prints usage error messages.
 *
 * Return: (EXIT_FAILURE) always.
 */

int usage_err(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	return (EXIT_FAILURE);
}

/**
 * malloc_err - Prints malloc error messages.
 *
 * Return: (EXIT_FAILURE) always.
 */
int malloc_err(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	return (EXIT_FAILURE);
}

/**
 * file_open_err - Prints file opening error messages w/ file name.
 * @filename: Name of file failed to open
 *
 * Return: (EXIT_FAILURE) always.
 */
int file_open_err(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	return (EXIT_FAILURE);
}

/**
 * unrec_oper_err - Prints unknown instruction error messages.
 * @opcode: Opcode where error occurred.
 * @line_number: Line number in Monty bytecodes file where error occured.
 *
 * Return: (EXIT_FAILURE) always.
 */
int unrec_oper_err(char *opcode, unsigned int line_number)
{
	fprintf(stderr, "L%u: unknown instruction %s\n",
		line_number, opcode);
	return (EXIT_FAILURE);
}

/**
 * no_int_error - Prints invalid monty_push argument error messages.
 * @line_number: Line number in Monty bytecodes file where error occurred.
 *
 * Return: (EXIT_FAILURE) always.
 */
int no_int_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	return (EXIT_FAILURE);
}
