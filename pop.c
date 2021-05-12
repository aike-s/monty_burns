#include "monty.h"

#define ERROR -1
#define SUCCESS 1
/**
 * delete_dnodeint_at_index - Delete node in double linked list
 * @head: double linked list
 * @index: int
 * Return: Always EXIT_SUCCESS.
 */
int _pop(stack_t **head)
{
	unsigned int i;
	stack_t *tmp = *head;

	if (head == NULL || *head == NULL)
		return (ERROR);
	for (i = 0; tmp->next; i++)
		tmp = tmp->next;

	if (tmp == NULL)
		return (ERROR);

	if (*head == tmp)
		*head = tmp->next;

	if (tmp->next)
		tmp->next->prev = tmp->prev;

	if (tmp->prev)
		tmp->prev->next = tmp->next;

	free(tmp);
	return (SUCCESS);
}
