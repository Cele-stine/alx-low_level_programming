#include "main.h"
#include <stdio.h>

/**
 * main - Prints the numbers from 1 to 100, followed by a new line
 * but for the multiples of three it prints Fizz instead of the number
 * and to the multiples of five prints Buzz
 * Return: Always 0 (succes)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		} else if (i == 1)
		{
			printf("%d", i);
		} else
		{
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}
