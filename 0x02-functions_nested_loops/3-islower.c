#include "main.h"

/**
 * _islower - Entry point
 * @v: boolean variable
 *
 * Description - Write a function that
 *	- checks for lowercase character.
 *	- Prototype: int _islower(int c);
 *	- Returns 1 if c is lowercase
 *	- Returns 0 otherwise
 *
 * File Name: 3-islower.c
 *
 * Author - John Ali
 *
 * Email - alionuche2008@gmail.com
 *
 * Return: always 0
 *
 */

int _islower(int v)
{
	if (v >= 'a' && v <= 'z')
		return (1);
	else
		return (0);
}
