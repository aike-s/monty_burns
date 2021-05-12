#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at a given position
 * @head: head to the doubly linked list
 * @index: index of the list where the new node should be added
 * Return: 1 if it succeeded, -1 if it failed
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int counter = 0;

	if (!head)
		return (-1);

	if (index == 0)
	{
		if (tmp->next == NULL)
		{
			free(*head);
			return (1);
		}
		*head = tmp->next;
		tmp->next->prev = NULL;
		free(tmp);
		return (1);
	}
	while (tmp)
	{
		if (counter == index)
		{
			tmp->prev->next = tmp->next;
			tmp->next->prev = tmp->prev;
			free(tmp);
			return (1);
		}
		counter++;
		tmp = tmp->next;
	}
	return (-1);
}
