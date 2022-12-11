#include <stdlib.h>
#include <time.h>
/** More headers goes here */
#include <stdio.h>
/**
 * main - A program to generate random number each time its run
 * Description - This program generates random number each time it is run
 * This program uses the C Betty Style Code
 *
 *	- If the number is greater than 0 the program will print is zero
 *	- If the number is less than 0 the program will print is negative
 *	- If the number is 0 the program will print is zero
 *
 * @n - is the variable where we store the generated number
 *
 * Return: 0 is returned to the OS if the program runs successively,
 * 1 otherwise
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/** Your code goes here */

	/**
	 * Description - We check for the output of the programme
	 * if it is positive
	 */
	if (n > 0)
	{
		printf("%i is positive", n);
	}

	/**
	 * Description - We cehck for the output if the program is negative
	 */
	else if (n < 0)
	{
		printf("%i is negative", n);
	}

	/**
	 * If the number generated is neigther positive nor negative
	 * then it is zero
	 */
	else
		printf("%i is zero", 0);

	return (0);
}
