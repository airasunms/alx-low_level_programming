#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times
 *
 * Return: 0 to 14 ten times
 */

void more_numbers(void)
{
	int y;

	for (y = 0 ; y <=14 ; y++)
	{
	if (y > 9)
	{
	_putchar((y / 10) + '0');
	}
	_putchar((y % 10) + '0');
	}
	_putchar('\n');
}
