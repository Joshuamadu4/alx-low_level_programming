#include <stdio.h>

/**
 * main - Printing letter without q and e
 *
 * Return: Always (Sucess)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
	}

	putchar('\n');

	return (0);
}
