#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a ptr to a new string which is a duplicate of a string.
 * @str: The duplicated string
 *
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	int strSize = 0;
	int i;
	char *newStr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*(str + strSize))
	{
		strSize++;
	}
	strSize++;

	newStr = malloc(strSize * sizeof(char));

	if (newStr == NULL)
	{
		return (0);
	}

	for (i = 0; i < strSize; i++)
	{
		newStr[i] = str[i];
	}
	return (newStr);
	free(newStr);
}
