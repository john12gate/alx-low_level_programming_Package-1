#include "main.h"

/**
 * _abs - prints absolute numbers
 * @k - variable number
 * @a: variable number
 * @abs - variable number
 *
 * Description - Write a function that computes
 * the absolute value of an integer.
 *	- Prototype: int _abs(int);
 *
 * Author - John Ali
 * Email - alionuche2008@gmail.com
 *
 * Return: always 0
 *
 */

int _abs(int a)
{
int k = a;
int abs;

if (k < 0)
{
k *= (-1);
}
abs = k;
return (abs);
}
