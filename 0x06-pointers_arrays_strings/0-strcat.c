#include "main.h"

/**
 * _strcat - the function concatenates the string pointed to by @src
 *@src: the source string to be appended in @dest
 *@dest: the string being appended on by @src
 *Return: returns the concatenated string @dest
 */
char *_strcat(char *dest, char *src)
{
	int value = 0, dest_len = 0;

	while (dest[value++])
		dest_len++;
	for (value = 0; src[value++]; value++)
		dest[dest_len++] = src[value];
	return (dest);
}
