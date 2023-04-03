#include "lists.h"

/**
 * free_listint -  function that frees a list
 * @head: pointer to structure listint_t
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
