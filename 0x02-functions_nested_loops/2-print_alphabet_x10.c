#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * @c - variable for alphabets
 *
 * Author - John Ali
 * Email - alionuche2008@gmail.com
 *
 * Description - A function to print a - z 
 * in ten lines
 *
 * Return: Always 0
 *
 */

void print_alphabet_x10(void)
{
	char c, i;

	for (i = 1; i <= 10; i++)
	{

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar('c');
	}

       _putchar('\n');
	
	}

	return (0);
}	
