#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if ((n>5))
		printf("and is greater than 5");
	if ((n==0))
		printf("and is 0");
	if ((n<0))
		printf("and is less than 6 and not 0");
	return (0);
}
