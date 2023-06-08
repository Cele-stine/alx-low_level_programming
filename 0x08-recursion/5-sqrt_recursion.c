#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - a function that returns the natural sqrt
 * of a number using recursion
 * @n: the squared number
 *
 * Return: the squareroot of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
		return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - a function that recurses to finnd the natural
 * sqrt of a number
 * @n: the squared number
 * @i: the iterator
 *
 * Return: the square root of a number
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
		return (actual_sqrt_recursion(n, i + 1));
}
