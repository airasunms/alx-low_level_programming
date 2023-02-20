#include <stdio.h>

/**
 * main - prints alphabets in lowercase without printing q and e
 *
 * Return: when successful
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
