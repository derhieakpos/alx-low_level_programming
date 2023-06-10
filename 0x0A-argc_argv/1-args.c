#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name
 * @argc: command line args counter
 * @argv: storage of command line args
 *
 * Return: zero.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
