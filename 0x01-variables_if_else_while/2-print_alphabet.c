#include <stdio.h>
/**
 * main - Alphabets a - z
 * @alphabet - variables for a - z
 * Return: Always return 0
 * Description - A program to print alphabets a - z
 */
int main(void)
{
	char alphabet;

	alphabet = 'a';

	/** A loop statement to print a - z */

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
