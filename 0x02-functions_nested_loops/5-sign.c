#include "main.h"

/**
 * print_sign - Main Entry
 * @x - Variable of sign
 *
 * Description - Write a function that prints the sign of a number.
 *	- Prototype: int print_sign(int n);
 *	- Returns 1 and prints + if n is greater than zero
 *	- Returns 0 and prints 0 if n is zero
 *	- Returns -1 and prints - if n is less than zero
 *
 * File Name - 5-sign.c
 *
 * Author - John Ali
 * Email - alionuche2008@gmail.com
 *
 * Return: always 0
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
