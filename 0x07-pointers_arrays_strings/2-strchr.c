#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: the character
 * @c: the locator of the character
 *
 * Return: The character in a string
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	if (c == '\0')
	{
		return (s + i);
	}
	return ('\0');
}
