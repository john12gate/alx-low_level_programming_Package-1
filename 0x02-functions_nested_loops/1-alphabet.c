#include "main.h"

/**
 * main - prints small letters a - z
 * @c - char variables for holding alphabets
 * Author - John Ali
 * Email - alionuche2008@gmail.com
 *
 * Description - A function that prints a - z
 *
 */

void print_alphabet(void)
{
	char a;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
