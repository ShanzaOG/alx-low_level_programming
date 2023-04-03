#include "lists.h"

/**
 * listint_len - function returns the number of elements in a linked list
 * @h: pointer to structure listint_t
 * Return: The number of elements ie. count
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
