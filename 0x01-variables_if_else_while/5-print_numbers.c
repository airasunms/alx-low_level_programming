#include <stdio.h>

/**
 * main - prints all single digit numbers in base ten starting from zero
 *
 * Return: when successful
 */

int main(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
		printf("%d", i);
	printf("\n");
	return (0);
}
