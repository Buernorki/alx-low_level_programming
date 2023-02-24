#include "main.h"

/**
 * _isupper - _isupper write a function that checks for uppercase character.
 * @c: Variable text
 * Return: returns 1 if c is uppercase, returns 0 otherwise
 */

int _isupper(int c);
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
