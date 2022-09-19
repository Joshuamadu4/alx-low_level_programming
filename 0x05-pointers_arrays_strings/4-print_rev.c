#include "main.h"

/**
 * print_rev - Prints a string in reverse order
 * @s: inputs Sting to reverse order
 * Return: 0
 */

void print_rev(char *s)

{
	int length = strlen(s);

	while (length--)
		putchar(*(s + length));
	putchar(10);
}
