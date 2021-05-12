#include "monty.h"


/**
 * main - monty interpreter
 * @argc: args counter
 * @argv: args values
 * Return: exit status
 */
int main(int argc, char *argv[])
{
  /* validate path */
  FILE *file = NULL;
  file = validate_path(argc, argv, file);
  /* initialize stack */
  ssize_t char_read = 0;
  size_t buffer_size = 0, num_line = 1;
  char * line_read = NULL;
  stack_t *head = NULL;
  head = head;
  /* read file*/
  while (char_read != EOF)
  {
    /*recordar liberar el malloc de getline*/
    char_read = getline(&line_read, &buffer_size, file);
    line_read[char_read - 1] = '\0'; /*para eliminar el caracter '/n'*/


  // if (strcmp("push", char_read)){
  //   int arg = get_arg(char_read);
  //   push(stack, num_line, arg);
  // }
    /* execute */
    num_line++;
  }
  /*free mallocs */
  return (EXIT_SUCCESS);
}
