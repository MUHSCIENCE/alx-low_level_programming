#include "main.h"

/**
 * _memcpy - function that copies memory area
 *
 * @dest: buffer where we copy to
 * @src: what to copy
 * @n: n bytes of @src
 *
 * Return: Always 0 (success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int m = n;

	for (; j < m; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
