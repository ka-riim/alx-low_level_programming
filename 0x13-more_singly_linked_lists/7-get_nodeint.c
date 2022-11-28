#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - gets the nth node of a listint_t linked list.
 * @head: first node
 * @index: node to get
 * Return: returns the nth node of a listint_t
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head)
	{
		while (head)
		{
			if (count == index)
				return (head);
			head = head->next;
			count++;
		}
	}
	return (NULL);
}
