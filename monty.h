#ifndef MONTY_H
#define MONTY_H

/* LIBRARIES */
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/* STRUCTURES */
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */

#define BUFFER_SIZE 1024
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

/* MAIN FUNCTIONS */

/*print error msg in standard error*/

void (*find_built(char *built_in))(stack_t **stack, unsigned int line_number);

void perror_exit(int, int, char *, stack_t **);

FILE *validate_path(int argc, char *argv[], FILE *file);

/* BUILT-IN FUNCTIONS */

/*prints all the elements of a stack_t list*/
stack_t _pall(const stack_t *h);
/*adds a new node at the beginning of a dlistint_t list*/
stack_t *_push(stack_t **head, unsigned int n);
/* Delete node in double linked list*/
int _pop(stack_t **head);
void test();
/*validate if two strings are equals*/
int _strcmp(char *str1, char *str2);
#endif
