#include "main.h"

/**
 * Print_alphabet_x10 - Printing Alphabets 10 times 
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char a, i; 
	
	for (i = 0; i <= '9'; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
