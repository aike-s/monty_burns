#include "monty.h"

FILE *validate_path(int argc, char *argv[], FILE *file)
{
  if (argc != 2)
    perror_exit(0, 0, NULL, NULL);
  /* perror_exit */

  file = fopen(argv[1], "r");
  if (file == NULL)
  {
    /*Error: Can't open file <file>*/
    perror_exit(0, 1, argv[1], NULL);
  }
  return (file);
}

void perror_exit(int n_line, int err_code, char *filename, stack_t **stack)
{
  n_line = n_line;
  filename = filename;
  stack = stack;

  /* print error msg*/

  /* 0 USAGE: monty file\n */
  if (err_code == 0)
  {
    fprintf(stderr, "USAGE: monty file\n");
  }
  else if (err_code == 1)
  {
    fprintf(stderr, "Error: Can't open file %s\n", filename);
  }
  /* frees */
  exit(EXIT_FAILURE);
}
