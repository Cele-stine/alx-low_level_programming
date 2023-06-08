#include "main.h"

int is_prime_recursion(int n, int divisor);
/**
 * is_prime_number - checks if a number is a prime numberbor not
 * @n: the number to check
 *
 * Return: 1 if prime and 0 if not
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (is_prime_recursion(n, n - 1));
}

/**
 * is_prime_recursion - a function that checksif
 * a number is a prime number recusively
 * @n: the number to check
 * @divisor: the number we are using to divide n
 *
 * Return: 1 if the n is prime number 0 if not
 */

int is_prime_recursion(int n, int divisor)
{
	if (divisor == 1)
	{
		return (1);
	}
	if (n % divisor == 0 && divisor > 0)
	{
		return (0);
	}
	return (is_prime_recursion(n, divisor - 1));
}
