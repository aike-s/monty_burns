#include "monty.h"

/**
 *  _strcmp - validate if two strings are equals.
 *  @str1: text one.
 *  @str2: text two.
 *  Return: If the texts are equal 1, or else 0.
 */
int _strcmp(char *str1, char *str2)
{
	/* edge case */
	if (!str1 || !str2)
		return (0);

	/* if case base failure*/
	if (*str1 != *str2)
		return (0);

	/* if case base success*/
	if (!*str1 && !*str2)
		return (1);

	/* recursion case */
	return (_str_cmp(str1 + 1, str2 + 1));
}

int tokenize(char *opcode)
{
	size_t i;
	char *token;
	for (i = 0; 1; i++)
	{
		token = strtok(((i == 0) ? opcode : NULL), DELIM_PATH);
		if (token == NULL)
		{
			break;
		}
	}
}
