#include "main.h"

/**
 * _isdigit - check if a character is a digit
 * @x: number to be checked
 *
 * Return: 1 for a digit and 0 otherwise
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
