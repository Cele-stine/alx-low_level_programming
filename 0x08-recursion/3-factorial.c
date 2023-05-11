#include "main.h"

/**
 * factorial - a function that retuns the factorial of a given number
 * @n: The number we are returnimg the factorial of
 * Return: factorial of n
 * on error, return -1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
