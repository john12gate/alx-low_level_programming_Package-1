#include <stdio.h>

/**
 * main - program that prints different numbers
 * @x - variable for first digit
 * @y - variable for second digit
 *
 * Author: John Ali
 * Email: alionuche2008@gmail.com
 *
 * Description - Write a program that prints all
 * possible different combinations of two digits.
 *
 *	- Numbers must be separated by , followed by a space
 *	- The two digits must be different
 *	- 01 and 10 are considered the same
 *	- combination of the two digits 0 and 1
 *	- Print only the smallest combination of two digits
 *	- Numbers should be printed in ascending order, with two digits
 *	- You can only use the putchar function
 *	- (every other function (printf, puts, etc…) is forbidden)
 *	- You can only use putchar five times maximum in your code
 *	- You are not allowed to use any variable of type char
 *	- All your code should be in the main function
 *
 * Return: Always return 0
 *
 *
 */

int main(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = x + 1; y < 10; y++)
		{
			putchar((x % 10) + '0');
			putchar((y % 10) + '0');

			if (x == 8 && y == 9)
				continue;

			putchar(',');
			putchar(' ');
		}


	}

	putchar('\n');

	/** Always return 0 */

	return (0);

}
