#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints its own opcodes
 * @argc: the number of arguments
 * @argv: an array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, a;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}


	arr = (char *)main;
	for (a = 0; a < bytes; a++)
	{
		if (a == bytes - 1)
	{
		printf("%02hhx\n", arr[a]);
		break;
	}
		printf("%02hhx ", arr[a]);
	}
	return (0);
}
