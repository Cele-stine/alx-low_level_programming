#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks that the string contains a non_digit char
 * @s: the string to check
 *
 * Return: 0 if non digit and 1 if digit
 */

int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len;

	len = strlen(s);

	return (len);
}

/**
 * errors - handles errors for main
 * Return: nothing
 */

void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on succes
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, lentot;
	int carry;
	int digit1, digit2 = 0;
	int a, i = 0;
	int *result;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = strlen(s1);
	len2 = strlen(s2);
	lentot = len1 + len2 + 1;
	result = malloc(sizeof(int) * lentot);
	if (result == NULL)
	{
		return (1);
	}
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry += result[len1 + len2 + 1] + (digit1 * digit2);
		result[len1 + len2 + 1] = carry % 10;
		carry /= 10;
	}
	if (carry > 0)
		result[len1 + len2 + 1] += carry;
	for (i = 0; i < lentot - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar ('\n');
	free(result);
	return (0);
}
