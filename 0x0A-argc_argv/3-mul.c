#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: command line args counter.
 * @argv: stores command line args.
 *
 * Return: Zero.
 */
int main(int argc, char *argv[])
{
	int mul, i, j;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		mul = i* j;
		printf("%d\n", mul);
	}
	return (0);
}
