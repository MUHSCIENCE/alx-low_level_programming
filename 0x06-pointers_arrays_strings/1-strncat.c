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

	while (dest[value++] != '\0')
		dest_len++;
	for (dest_len = 0 && dest_len < n ; src[dest_len] != '\0'; dest_len++)
		dest[value + dest_len] = src[dest_len];
	dest[value + dest_len] = '\0';
		dest[dest_len++] = src[value];
	return (dest);
}
