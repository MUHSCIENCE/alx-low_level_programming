#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
if (n > 5)
	printf("%dand is greater than 5", n);
else if (n == 0)
	printf("%dand is 0", n);
else
{
	printf("%dand is less than 6 and not 0", n);
}
	return (0);
}
