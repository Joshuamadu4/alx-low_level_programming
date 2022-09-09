#include <stdio.h>

/**
 * main - Printing both Lower and Upper case alphabet
 *
 * Return: Always (Success)
 */
int main(void)
{
	char x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}

	putchar ('\n');
	return (0);
}

