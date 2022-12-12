#include <stdio.h>

/**
 * main - prints all the numbers of base 16
 * @x - variable of number
 *
 * Description - Write a program that prints all
 *
 * Return:- Always 0 on success
 *
 */

int main(void)
{
	int x;

	char letters;

	for (x = 0; x < 10; x++)
	{
		putchar((x % 10) + '0');
		x++;
	}

	for (letters = 'a'; letters < 'f'; letters++)
	{
		putchar(letters);
	}

	putchar('\n');

	return (0);
}
