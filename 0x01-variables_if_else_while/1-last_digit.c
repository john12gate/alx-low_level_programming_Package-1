#include <stdlib.h>
#include <time.h>

/** More headers goes here */

#include <stdio.h>

/**
 * main - Random number generator
 * Description - This program will assign a random number to the
 * variable n each time it is executed.
 * The variable n will store a different value every time
 * you run this program
 * The output of the program should be:
 * The string Last digit of, followed by n, followed by
 * the string is, followed by
 *	- if the last digit of n is greater than 5:
 *	the string and is greater than 5
 *	- if the last digit of n is 0:
 *	the string and is 0
 *	- if the last digit of n is less than 6 and not 0:
 *	the string and is less than 6 and not 0
 * followed by a new line
 *
 * Return: Always retrun 0 otherwise 1
 */

int main(void)
{
	/** Declaration of variables */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/** Your code goes here */

	/**
	 * Description - We check for the output of the programme
	 * if it is positive
	 */
	if ((10 % n) < 5)
	{
		printf("The last digit of %d is %d and is greater than 5\n", n, 10 % n);
	}

	/**
	 * Description - We cehck for the output if the program is negative
	 */
	else if ((10 % n) < 6 && (10 % n) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, 10 % n);
	}

	/**
	 * If the number generated is
	 * neigther positive nor negative
	 * then it is zero
	 */
	else
		printf("Last digit of %d is %d and is 0\n", n, n % 10);

	return (0);
}
