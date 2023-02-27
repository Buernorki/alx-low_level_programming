#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int matty = 0;
	int nat = 0;
	char *j = str;
	int patty;

	while (*j != '\0')
	{
		j++;
		matty++;
	}
	nat = matty - 1;
	for (patty = 0 ; patty <= nat ; patty++)
	{
		if (patty % 2 == 0)
	{
		_putchar(str[patty]);
	}
	}
	_putchar('\n');
}
