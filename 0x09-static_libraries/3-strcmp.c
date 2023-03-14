#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: input being compared
 * @s2: input to be compared
 * Return: returns the result
 */
int _strcmp(char *s1, char *s2)
{
	int m = 0;

	while (s1[m] != '\0' && s2[m] != '\0')
	{
		if (s1[m] != s2[m])
		{
			return (s1[m] - s2[m]);
		}
		m++;
	}
		return (s1[m] - s2[m]);

}
