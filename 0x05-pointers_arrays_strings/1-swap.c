#include "main.h"
/**
 * swap_int - swaps the numbers between two integer variables
 * @a: first int input
 * @b: second int input
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
