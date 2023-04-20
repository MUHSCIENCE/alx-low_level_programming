#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: returns 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *m = haystack;
		char *z = needle;

		while (*m == *z && *z != '\0')
		{
			m++;
			z++;
		}

		if (*z == '\0')
			return (haystack);
	}

	return (0);
}
