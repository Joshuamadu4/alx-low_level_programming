#include <stdlib.h>
#include <stdio.h>

/**
 * main - The code that view combination of first 900 numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 48;
	int b = 48;
	int c = 48;
	int d = 48;

	for (a = 48; a <= 57; ++a)
	{
		for (b = 48; b <= 57; ++b)
		{
			for (c = 48; c <= 57; ++c)
			{
				for (d = 48; d <= 57; ++d)
				{
					if (((c + d) > (a + b) && c >= a) || a < c)
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);

					if (a + b + c + d == 227 && c == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
