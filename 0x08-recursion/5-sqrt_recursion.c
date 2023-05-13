#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - function that returns the square root of a number
 * @n: input value
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural square root of a number
 * @n: input value
 * @i: iterator
 * Return: square root of n
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
