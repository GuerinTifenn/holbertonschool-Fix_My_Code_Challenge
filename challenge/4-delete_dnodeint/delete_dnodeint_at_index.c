#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at a specific index
 *                            of a doubly linked list
 * @head: The pointer to the head of the list
 * @index: The index of the node to delete
 *
 * Return: 1 if successful, -1 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	/* Traverse to the node at the specified index */
	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (!temp) /* If the node doesn't exist */
		return (-1);


	if (temp->prev == NULL)
	{
		*head = temp->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
	}
	else
	{

		temp->prev->next = temp->next;


		if (temp->next != NULL)
		{
			temp->next->prev = temp->prev;
		}
	}
	free(temp);

	return (1);
}
