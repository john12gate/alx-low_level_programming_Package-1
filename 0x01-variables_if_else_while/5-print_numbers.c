#include <stdio.h>

/**
 * main - prints all single digit numbers
 * @x - variable to hold every single digits
 *
 * Authour - John Ali
 *
 * Email - alionuche2008@gmail.com
 *
 * Description - Write a program that prints
 *	- all single digit numbers of base 10
 *	- starting from 0, followed by a new line.
 *	- All your code should be in the main function
 *
 * Return: Always 0
 */

int main(void)
{
	int x = 0;

	for (x = 0; x < 10; x++)
	{
		printf("%d", x);
	}

	putchar('\n');

	/** Return 0 to the OS  */

	return (0);
}
