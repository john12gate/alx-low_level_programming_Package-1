#include <stdio.h>

/**
 * main - Prints lowercase alphabet in reverse
 * @x - x is the variable that holds the number
 *
 * Author: John Ali
 *
 * Email: alionuche2008@gmail.com
 *
 * Program Name - Smile in the mirror
 *
 * Description - Write a program that prints the
 * lowercase alphabet in reverse, followed by a new line.
 *
 * You can only use the putchar function
 *	- (every other function (printf, puts, etc…) is forbidden)
 *	- All your code should be in the main function
 *	- You can only use putchar twice in your code
 *
 * Return: Always 0
 */

int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');


	/** Return 0 to the OS upon success */

	return (0);
}
