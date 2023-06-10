#include "main.h"

/**
 * _abs - this is an absolute value function that checks
 * if an int is positive or negative
 * @n: the int to check
 * Return: n if positive and -n if negative
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
		return (-n);
}
