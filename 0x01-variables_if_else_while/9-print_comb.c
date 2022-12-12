#include <stdio.h>

/**
 * main - Prints all possible combinations
 * @x - parameter variables for all posible numbers
 *
 * Description - Write a program that prints all
 * possible combinations of single-digit numbers.
 *
 * Return: Always return 0 on Success
 *
 */

int main(void)
{
	int x;

	for (x = 0; x < 9; x++)
	{
		putchar ((x % 10) + '0');
		if (x >= 9)
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	/** On success, return 0 to the OS*/
	return (0);
}
