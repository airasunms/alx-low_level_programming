#include "main.h"

/**
 * _isalpha - function checks for alphabetic character
 *
 * @c: parameter to be checked
 *
 * Return: 1 if it is an alphabet
 * and 0 if it is not
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
