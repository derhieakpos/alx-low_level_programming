#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Assign a random number to the variable each time it is executed
 *Return: 0
 */

int main(void)
{
	int i;
	int l;

	srand(time(0));
	i = rand() - RAND_MAX / 2;
	l = i % 10;

	if (l > 5)
		printf("Last digit of %i is %i and is greater than 5\n", i, l);
	else if (l == 0)
		printf("Last digit of %i is %i and is 0\n", i, l);
	else if (l < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", i, l);
	return (0);
}
