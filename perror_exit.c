#include "monty.h"

void perror_exit(int n_line, int err_code, char *filename, stack_t **stack)
{
  n_line = n_line;
  filename  = filename;
  stack = stack;

  /* print error msg*/

  /* 0 USAGE: monty file\n */
  if (err_code == 0)
    {
      fprintf(stderr, "USAGE: monty file\n");
    }
  /* frees */
  exit(EXIT_FAILURE);
}

