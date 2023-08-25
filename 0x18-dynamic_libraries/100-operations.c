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
 * substract - substracts one int from another
 * @a: the first integer.
 * @b: the second integer.
 * Return: the diffrience of a and b.
 */

int substract(int a, int b)
{
	return (a - b);
}

/**
 * multiply - multiplies two integers
 * @a: the first integer
 * @b: the second integer.
 * Return: the resunt of multiplying a and b.
 */

int multiply(int a, int b)
{
	return (a * b);
}

/**
 * divide - divide two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the division of a and b.
 */

int divide(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
		return (0);
}

/**
 * modulus - gets the remainder of rhe division of integers.
 * @a: the first integer
 * @b: the second integer.
 * Return: the modulus of a and b.
 */

int modulus(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
		return (0);
}
