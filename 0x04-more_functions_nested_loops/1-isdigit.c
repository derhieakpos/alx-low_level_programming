#include "main.h"
/**
 * _isdigit - Entry point
 * * @c: Checks for digits (0 through 9)
 *
 * Return: 1 or  0
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
