#include "main.h"

/**
 * print_last_digit - returns last digit of a number
 * @n: variable of number
 *
 * Description - Write a function that
 *	- prints the last digit of a number.
 *	- Prototype: int print_last_digit(int);
 *	- Returns the value of the last digit
 *
 * Author - John Ali
 * Email - alionuche2008@gmail.com
 *
 * Return: always 0
 */


int print_last_digit(int n)
{

int last_digit = n % 10;
if (last_digit < 0)
last_digit *= -1;
_putchar(last_digit + '0');
return (last_digit);

}
