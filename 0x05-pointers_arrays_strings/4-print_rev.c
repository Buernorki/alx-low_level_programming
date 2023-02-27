#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int matty = 0;
	int a;

	while (*s != '\0')
	{
		matty++;
		s++;
	}
	s--;
	for (a = matty; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

