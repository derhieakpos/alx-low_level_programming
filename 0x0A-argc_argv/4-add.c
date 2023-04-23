#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds two numbers.
 * @argc: command line args counter.
 * @argv: stores command line args.
 *
 * Return: Zero.
 */
int main(int argc, char *argv[])
{
	int add, i, j;

	add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		add += atoi(argv[i]);
	}

	printf("%d\n", add);
	return (0);
}
