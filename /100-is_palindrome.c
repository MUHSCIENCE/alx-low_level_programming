#include "main.h"
#include <string.h>
/**
 * is_palindrome_n - returns 1if a string is a palindrome and 0 if not
 * @s: input string being checked
 * @start: the first character of the string
 * @end: the last character of the string
 * Return: returns the result
 */
int is_palindrome_n(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	else
		return (is_palindrome_n(s, start + 1, end - 1));
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: input string being checked
 * @len: the length of the string
 * Return: returns the result
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_n(s, 0, len - 1));
}
