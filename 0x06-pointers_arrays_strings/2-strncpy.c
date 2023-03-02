#include "main.h"
/**
 * -strncpy - copies strings
 *  @dest: input
 *  @src: source string
 *  Return: returns the cpied string
 */




char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

