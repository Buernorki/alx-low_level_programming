#include "main.h"

/**
 * print_sign - Write a function that prints the sign of a number.
 *
 * if it greater, equal, or less than zero
 *
 * @n: the input number is an integer
 *
 * Return: 1 is greater than zero, 0 is equal to zero,
 * -1 -s less than zero
 */
int print_sign(int n)
{
	if (n >  0)
	{
		_putchar(43);
		return (1);
	}
	else if (n <  0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
