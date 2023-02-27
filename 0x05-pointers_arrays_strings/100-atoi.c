#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int cat = 0;
	unsigned int dat = 0;
	int mat = 1;
	int nat = 0;

	while (s[cat])
	{
		if (s[cat] == 45)
		{
			mat *= -1;
		}
		while (s[cat] >= 48 && s[cat] <= 57)
		{
			nat = 1;
			dat = (nat * 10) + (s[cat] - '0');
			cat++;
		}
		if (nat == 1)
		{
			break;
		}
		cat++;
	}
	dat *= mat;
	return (dat);
}
