#include "monty.h"
/**
 * _pall - prints all the elements of a stack_t list
 * @h: head in the dobly linked list
 * Return: the number of nodes
 **/
stack_t _pall(const stack_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (NULL);
	while (h != NULL)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (NULL);
}
