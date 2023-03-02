#include "main.h"
/**
 * string_toupper - changes the letters of a string to upper case
 * @s: the ponter to be changed to uppercase
 * Return: returns the converted strings
 */
char *string_toupper(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		if (s[k] >= 'a' && s[k] <= 'z')
		{
			s[k] = s[k] - ('a' - 'A');
		}
		k++;
	}
	return (s);
}
