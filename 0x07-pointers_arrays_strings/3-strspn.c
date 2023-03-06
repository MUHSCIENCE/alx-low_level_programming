#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: returns k
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				k++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (k);
		}
		s++;
	}
	return (k);
}
