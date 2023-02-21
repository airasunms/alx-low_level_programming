#include "main.h"

/**
 * main - prints alphabets in lowercase
 *
 * because of void in the prototype
 * there is no need for return 0 in the function
 *
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
