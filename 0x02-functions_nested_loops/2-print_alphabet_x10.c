#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: always 0 (sucess)i
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i <= 9)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
	}
	_putchar('\n');
}

