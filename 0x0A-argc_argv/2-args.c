#include "main.h"
#include <stdio.h>

/**
 * main - Prints all arguments received
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
