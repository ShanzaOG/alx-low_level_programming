#include "main.h"

/**
 * _strncpy - check description
 * @n: integer value of characters to be copied
 * @src: character pointer
 * @dest: character pointer
 * Description: copies strings
 * Return: character pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;
	char *start = src;
	int i = 0;
	int srd_len = 0;

	while (*src)
	{
		src_len++;
		src++;
	}
	src_len++;

	if (n > src_len)
		n = src_len;

	src = start;

	for (; i < n; i++)
		dest[i] = src[i];

	return (temp);
}

