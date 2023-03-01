#include "main.h"

/**
 *  _strncpy - concatenates string @dest from @src
 *  @dest: the string being concatenated to
 *  @src: the source of the string to be concatenated
 *  Return: returns the concatenated string @dest
 *  @n: value to be input
 */
char *_strncat(char *dest, char *src, int n)
{
	int value = 0, dest_len = 0;

	while (dest[value++])
		dest_len++;
	for (value = 0; src[value++] && value < n; value++)
		dest[dest_len++] = src[value];
	return (dest);
}
