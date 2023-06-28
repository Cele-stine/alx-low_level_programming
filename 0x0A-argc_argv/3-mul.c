#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer conveted
 */

int _atoi(char *s)
{
	int d, digit, len, f, i, n;

	d = 0;
	digit = 0;
	len = 0;
	f = 0;
	i = 0;
	n = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';

			if (d % 2)
				digit = digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on succes and 1 on error
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
