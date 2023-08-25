#include "main.h"
#include <stdio.h>

/**
 * add - adds two integers
 * @a: the first integer
 * @b: the second integer.
 * Return: the sum of a and b
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - substracts one int from another
 * @a: the first integer.
 * @b: the second integer.
 * Return: the diffrience of a and b.
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies two integers
 * @a: the first integer
 * @b: the second integer.
 * Return: the resunt of multiplying a and b.
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divide two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the division of a and b.
 */

int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
		return (0);
}

/**
 * mod - gets the remainder of rhe division of integers.
 * @a: the first integer
 * @b: the second integer.
 * Return: the modulus of a and b.
 */

int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
		return (0);
}
