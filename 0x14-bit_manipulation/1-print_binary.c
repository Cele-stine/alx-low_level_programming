#include "main.h"
#include <limits.h>

void print_binary(unsigned long int n)
{
	int bit, num_bits, i;
	int leading_zeros = 1;

	num_bits = sizeof(n) * 8;

	for (i = num_bits - 1; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		if (bit == 1 || !leading_zeros)
		{
			_putchar('0' + bit);
			leading_zeros = 0;
		}
	}
	if (leading_zeros)
	{
		_putchar('0');
	}
}
