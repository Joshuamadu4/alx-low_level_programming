#include <stdio.h>

/**
 * main - Reverse Alphabets
 *
 * Return: Always (Success)
 */
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
