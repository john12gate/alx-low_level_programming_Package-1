#include "main.h"

/**
 * _isalpha - check for aA or zZ
 * @c - variable parameter
 *
 * Description - Write a function that checks
 * for alphabetic character.
 *	- Prototype: int _isalpha(int c);
 *	- Returns 1 if c is a letter, lowercase or uppercase
 *	- Returns 0 otherwise
 *
 * Author - John Ali
 * Email - alionuche2008@gmail.com
 *
 * Return: Always 0
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
