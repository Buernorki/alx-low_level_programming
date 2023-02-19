#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - print the last digit of a ramdomly generatored number
 * if it lees than 6, or equals 0, or greater the 5
 *
 * Return: always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if ((n % 10) > 5)
		printf("Last digit of %d is %d and is greater then 5", n, n % 10);
	else if ((n % 10) < 6 && (n % 10) != 0)
		printf("Last digit of %d is %d and less than 6 and not 0", n, n % 10);
	else
		printf("Last digit of %d is %d is 0", n, n % 10);
	printf("\n");
	return (0);
}
