#include "main.h"
/**
 * create_array - check description
 * @size: unsigned integer
 * @c: character
 * Description: creates an arrray of characters
 * Return: pointer to memory location
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size * sizeof(char));
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	if (arr == NULL)
		return (NULL);
	for (; i < size; i++)
		arr[i] = c;
	return (arr);
}
