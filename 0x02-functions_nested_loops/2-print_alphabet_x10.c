#include "main.h"

/**
 * main - Write a function that prints 10 times the alphabet,
 *
 * in lowercase, followed by a new line.
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 1;  i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
	}
	_putchar('\n');
}

