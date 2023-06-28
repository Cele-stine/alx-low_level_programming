#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: the attay of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
