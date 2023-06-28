#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - prints the result of simple operations
 * @argc: number of arguments in the program
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 */

int main(int_attribute_((_unused_))argc, char *argv[])
{
	char *op;
	int dig1, dig2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	dig1 = atoi(argv[1]);
	po = argv[2];
	dig2 = atoi(argv[3]);

	if ((*op == '/' && dig2 == 0) || (*op == '%' && dig2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(dig1, dig2));

	return (0);
}
