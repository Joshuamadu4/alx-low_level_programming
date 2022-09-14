#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers.
 *
 * Return: Nothing.
 */

int main(void)
{
	unsigned long count, a, b, c;
	
	a = 0;
	b = 1;
	for (count = 0; count < 50; count++)
	{
		a = b + c;
		b = c;
		c = a;
		printf("%lu", a);
		if (count == 49)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);

}
