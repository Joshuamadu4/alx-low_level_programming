#include "main.h"

/**
 * main - Prints _putchar 
 *
 * Return: Always 1 (Success)
 * on error, -1 is returned
 */
int _putchar(char a)
{
	return (write(1, &a, 1));

}
