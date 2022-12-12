#include <stdio.h>

/**
 * main - prints single digit numbers of base 10
 *
 * @x - variables of single digits
 *
 * Program Name: Numberz
 *
 * Author - John Ali
 *
 * Email: alionuche2008@gmail.com
 *
 * Description - Write a program that prints all single
 * digit numbers of base 10 starting from 0,
 * followed by a new line.
 *
 * You are not allowed to use any variable of type char
 * You can only use the putchar function
 *
 *	- (every other function (printf, puts, etc…) is forbidden)
 *	- You can only use putchar twice in your code
 *	- All your code should be in the main function
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar((x % 10) + '0');
	}

	putchar('\n');

	/** Return 0 on Success to the OS */

	return (0);
}
