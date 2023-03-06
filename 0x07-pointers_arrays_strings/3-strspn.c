#include "main.h"

/**
 * _strspn - get length of a prefix substring
 * @s: pointer to char
 * @accept: pointer to char
 * Description: gets len in bytes of s segments made of accept bytes
 * Return: the nmber of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int length = 0;
	int flag;
	char *p = accept;

	while (*s)
	{
		flag =0;
		while (*accept)
		{
			if (*accept)
			{
				length++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = p;
		if (flag == 0)
			break;
	}
	return (length);
}

