#include "main.h"

/**
 * factorial - a function that returns the factorial on a given number
 * @n: the number to be factorised
 *
 * Return: on success 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
