#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 *  This program will assign a random number to the variable n each time it is executed. 
 *  Complete the source code in order to print whether the number stored in the variable n is positive or negative.
 *  You can find the source code here
 *  The variable n will store a different value every time you will run this program
 *  You don’t have to understand what rand, srand, RAND_MAX do. Please do not touch this code
 *  The output of the program should be:
 *  The number, followed by:
 *  	if the number is greater than 0: is positive
 *  	if the number is 0: is zero
 *  	if the number is less than 0: is negative
 *  followed by a new line 
 **/

/**
 * Entry point of our code
 * In C every program / code begins with the main function
 * */
int main (void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/**
	 * Code to check for diffeent values of n
	 * We check for the value of n if its equal to zero if the program ran
	 */
	if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	/** 
	 * We check for the value of n if is less than 0
	 */
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	/**
	 * If the value of n is neither 0 or negative, then it is positive
	 */
	else 
	{
		printf("%i is positive\n", n);
	}
	/**
	 * We return the value of zero to th OS if the code runs successfully
	 */
		return (0);
}
