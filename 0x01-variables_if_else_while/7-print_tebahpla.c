#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
	char lowercase = 'z';
	/*print all lowercase alphabets in reverse */
	while (lowercase <= 'a')
	{
		putchar(lowercase);
		lowercase--;
	}
	putchar('\n');
	return (0);
}

