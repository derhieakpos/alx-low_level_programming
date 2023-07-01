#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates s1 and s2.
 * @s1: the string.
 * @s2: second string.
 * @n: number of bytes.
 *
 * Return: pointer to ptr NULL otherwise.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;

	unsigned int i, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	while (s2[j] != '\0' && j < n)
	{
		i++;
		j++;
	}

	ptr = (char *)malloc((i + 1) * sizeof(char));

	if (ptr)
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			ptr[j] = s1[j];
		}
		i = j;

		for (j = 0; s2[j] != '\0' && j < n; j++)
		{
			ptr[i + j] = s2[j];
		}
		ptr[i + j] = '\0';

		return (ptr);
	}
	return (NULL);
}
