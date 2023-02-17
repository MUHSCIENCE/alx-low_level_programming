#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	/* print alphabet in lowercase */
	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	/* print uppercase */
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
	return (0);
}
