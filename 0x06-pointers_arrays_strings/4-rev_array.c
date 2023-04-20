#include "main.h"

/**
 * reverse_array - reverses the elements of the array
 * @a: the pointer pointing to array
 * @n: the number of element in the array
 */
void reverse_array(int *a, int n)
{
	int p, q, t;

	for (p = 0, q = n - 1; p < q; p++, q--)
	{
		t = a[p];
		a[p] = a[q];
		a[q] = t;
	}
}

