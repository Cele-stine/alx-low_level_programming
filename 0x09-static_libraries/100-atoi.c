#include "main.h"

/**
 * _atoi - a function that a string if char to an int value
 * @s: the string to convert
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while (s[i] == ' ' || s[i] == '\t')
	{
		i++;
	}
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = (result * 10 + (s[i] - '0'));
		i++;
	}
	return (result * sign);
}
