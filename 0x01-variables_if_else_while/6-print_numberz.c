#include <stdio.h>

/**
 * main - prints single digit numbers starting from zero using putchar
 *
 * Return: when successful
 */

int main(void)
{
	int  i;

	for  (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
