#include "monty.h"
/**
 * _push - adds a new node at the beginning of a dlistint_t list
 * @head: head to the doubly linked list
 * @n: data for the new node
 * Return: the address of the new element, or NULL if it failed
 **/
stack_t *_push(stack_t **head, unsigned int n)
{
	stack_t *new_node = NULL;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	/*now new_node will point to what head pointed before*/
	if (*head != NULL)
		/*here we ask: if what head is pointing isn't NULL...do*/
		(*head)->prev = new_node;
	*head = new_node;
	/*now head will point to new_node*/
	return (*head);
}
