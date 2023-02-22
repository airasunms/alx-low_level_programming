#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @d: function parameter
 *
 * Return: k always
 */

int print_last_digit(int d)
{
	int k;

	k = d % 10;
	if (d < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
