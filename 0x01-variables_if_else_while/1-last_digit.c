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
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n;
if (n > 5)
	printf("Last digit of%d is %dand is greater than 5", m, n);
else if (n == 0)
	printf("Last digit of%d is %dand is 0", m, n);
else
	printf("Last digit of%d is %dand is less than 6 and not 0", m, n);
return (0);
}
