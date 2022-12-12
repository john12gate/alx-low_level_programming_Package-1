#include <stdio.h>

/**
 * main - Software is eating the World
 * @x - digit 1
 * @y - digit 2
 * @z - digit 3
 *
 * Author - John Ali
 * Email - alionuche2008@gmail.com
 *
 * Description - Write a program that prints 
 * all possible different combinations of three digits.
 *
 *	- Numbers must be separated by , followed by a space
 *	- The three digits must be different
 *	- 012, 120, 102, 021, 201, 210 are considered 
 *	- the same combination of the three digits 0, 1 and 2
 *	- Print only the smallest combination of three digits
 *	- Numbers should be printed in ascending order, with three digits
 *	- You can only use the putchar function
 *	- (every other function (printf, puts, etc…) is forbidden)
 *	- You can only use putchar six times maximum in your code
 *	- You are not allowed to use any variable of type char
 *	- All your code should be in the main function
 *
 *
 * Return: Always return 0
 *
 */

int main(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x < 8; x++)
	{
		for (y = x + 1; y < 9; y++)
		{
			for (z = y + 1; z < 10; z++)
			{
				putchar((x % 10) + '0');
				putchar((y % 10) + '0');
				putchar((z % 10) + '0');

				if (x == 7 && y == 8 && z ==9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	
	/** Always return 0 to OS */

	return (0);

}

