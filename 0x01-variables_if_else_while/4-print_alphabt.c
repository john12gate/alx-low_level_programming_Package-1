#include <stdio.h>
/**
 * main - Print alphabet
 * @a - alphabet
 *
 * Author - John Ali
 *
 * Email - alionuche2008@gmail.com
 *
 * Description - Write a program that prints the
 * alphabet in lowercase, followed by a new line.
 * Print all the letters except q and e
 * You can only use the putchar function
 *	- (every other function (printf, puts, etc…) is forbidden)
 *	- All your code should be in the main function
 *	- You can only use putchar twice in your code
 *
 * Return: Always return 0
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'e' && a != 'q')
			putchar(a);

	}

	putchar('\n');

	/** Always return 0 to the OS */

	return (0);
}
