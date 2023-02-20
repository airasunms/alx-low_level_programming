#include <stdio.h>

/**
 * main - code with putchar
 *
 * Return: when successful
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
