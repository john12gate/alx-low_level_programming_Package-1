#include <stdio.h>
/**
 * main - Alphabets aA - zZ
 * @alphabet - variables for aA - zZ
 * Return: Always return 0
 * Description - A program to print alphabets aA - zZ
 */
int main(void)
{
	char alphabet;
	char alphab;

	alphabet = 'a';
	alphab = 'A';

	/** A loop statement to print a - z */

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	while (alphab <= 'Z')
	{
		putchar(alphab);
		alphab++;
	}
	putchar('\n');
	return (0);
}
