#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
	char lowercase = 'a';

	/* print lowercasee */
	while (lowercase <= 'z')
	{
		if (lowercase != 'e' && lowercase != 'q')
		{
			putchar(lowercase);
		}
		lowercase++;
	}
	putchar('\n');
	return (0);
}
