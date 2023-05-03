#include "main.h"

/**
 * swap_int - swap the value of int a to int b and vise versa
 * @a: int to swap
 * @b:int to swap
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
