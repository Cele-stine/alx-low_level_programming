#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * return: void
 */

void print_buffer(char *b, int size)
{
	int h;
	int i;
	int j;

	h = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (h < size)
	{
		i = size - h < 10 ? size - h : 10;
		printf("%08x: ", h);
		for (j = 0; j < 10; j++)
		{
			if (j < i)
				printf("%02x", *(b + h + j));
			else
				printf(" ");
			if (j % 2)
			{
				printf(" ");
			}
		}
		for (j = 0; j < i; j++)
		{
			int c = *(b + h + j);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		h += 10;
	}
}
