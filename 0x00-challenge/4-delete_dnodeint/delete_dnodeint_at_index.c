#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Delete a node at a specific index from a list
 *
 * @head: A pointer to the first element of a list
 * @index: The index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *tmp, *prev;
unsigned int i = 0;

tmp = *head;

	if (tmp != NULL && index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (-1);
	}
	while (tmp != NULL && index != i)
	{
		prev = tmp;
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
		return (-1);

	prev->next = tmp->next;
	free(tmp);

return (1);
}

