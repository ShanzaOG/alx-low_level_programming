#include "lists.h"

/**
 * sum_listint - A function that sums values from listint_t
 * @head: A pointer listint_t structure
 * Return: The sum of all the data n from list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
