#include "monty.h"

/**
* find_built - find if
*
**/
void (*find_built(char *line_read))(stack_t **stack, unsigned int line_number)
{
/* find_build(line_read)(&head, num_line) */
// typedef struct instruction_s
// {
//         char *opcode;
//         void (*f)(stack_t **stack, unsigned int line_number);
//     int i;

  // if (strcmp("push", char_read)){
  //   int arg = get_arg(char_read);
  //   push(stack, num_line, arg);
  // }
	size_t i;

	instruction_t options[] = {
		{"push", _push},
		{"pall", _pall},
		// {"pint", _pint},
		// {"pop", _pop},
		// {"swap", _swap},
		// {"add", _add},
        // {"nop", _nop},
		{NULL, NULL}
	};

	for (i = 0; options[i].opcode != '\0'; i++)
		if (_strcmp(options[i].opcode, line_read))
			return (options[i].f);
	return (NULL);
}
